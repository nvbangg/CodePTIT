-- Creating the table from the slides
CREATE TABLE Company(
   name VARCHAR(20) PRIMARY KEY,
   country VARCHAR(20),
   employees INT,
   for_profit CHAR(1));

-- Insert the tuples from the slides
INSERT INTO Company VALUES ('GizmoWorks', 'USA',  20000, 'y');
INSERT INTO Company VALUES ('Canon',     'Japan', 50000, 'y');
INSERT INTO Company VALUES ('Hitachi',   'Japan', 30000, 'y');
INSERT INTO Company VALUES ('HappyCam',  'Canada',  500, 'n');

-- Show the contents of the table
SELECT * FROM Company;

-- Make it look nicer using these SQLite-specific commands
.header on
.mode column

SELECT * FROM Company;

-- Whenever we don't know the value, we can set it to NULL
INSERT INTO Company VALUES ('MobileWorks', 'China', null, null);

SELECT * FROM Company;

-- Make null values show up as "NULL" instead of blank
.nullvalue NULL

SELECT * FROM Company;

-- Delete Hitachi from the table
DELETE FROM Company WHERE name = 'Hitachi';

SELECT * FROM Company;

-- What will this do?
DELETE FROM Company WHERE for_profit = 'n';

SELECT * FROM Company;

-- Since name is a key, the DBMS will not allow duplicates.
-- This will fail:
INSERT INTO Company VALUES('Canon', 'Japan', null, null);

-- Keys also cannot be null in SQL.
-- Alert 1: sqlite allows a key to be null
INSERT INTO Company VALUES(NULL, 'Somewhere', 0, 'n');

SELECT * FROM Company;

DELETE FROM Company WHERE country = 'Somewhere';

SELECT * FROM Company;

-- Add a column to the table.
-- All values are initially null.
ALTER TABLE Company ADD ceo varchar(20);
SELECT * FROM Company;

-- Note: SQL Lite does not support dropping an attribute
-- I.e., "alter table Company drop for_profit" doesn't work

-- Change the values of columns in matching rows.
UPDATE Company SET ceo='Brown' WHERE name = 'Canon';

SELECT * FROM Company;

-- Want to add a list of products made by each company. SQL does not support
-- list types? (We could try to use a string, but that would cause problems.)
-- What do we do? We create another table to store the products.

-- Create a Product table with a foreign key reference to the Company.
CREATE TABLE Product(
   name VARCHAR(20) PRIMARY KEY,
   price FLOAT,
   category VARCHAR(20),
   manufacturer VARCHAR(20) REFERENCES Company);

-- This will show all the tables in SQLite
.schema

-- Alert 2: sqlite does NOT enforce foreign keys by default. To enable
-- foreign keys use the following command. The command will have no
-- effect if your version of SQLite was not compiled with foreign keys
-- enabled. Do not worry about it.
PRAGMA foreign_keys=ON;

INSERT INTO Product VALUES ('Gizmo',      19.99, 'gadget', 'GizmoWorks');
INSERT INTO Product VALUES ('PowerGizmo', 29.99, 'gadget', 'GizmoWorks');
INSERT INTO Product VALUES ('SingleTouch', 149.99, 'photography', 'Canon');
INSERT INTO Product VALUES ('MultiTouch', 199.99, 'photography', 'MobileWorks');
INSERT INTO Product VALUES ('SuperGizmo', 49.99, 'gadget', 'MobileWorks');

SELECT * FROM Product;

-- If we attempt to add a tuple with a bad Company reference, it fails:
INSERT INTO Product VALUES ('Hoverboard', 299.99, 'entertainment', 'NewCompany');

--------------------------------------------------------------------------------
-- 1. SELECTION queries select a subset of the table:

-- What do you think the following queries return?

SELECT * FROM Product
WHERE price > 100.0;

SELECT * FROM Product
WHERE pname like '%e%';

SELECT * FROM product
WHERE price > 100 and pname like '%e%';


--------------------------------------------------------------------------------
-- 2. PROJECTION queries keep a subset of the attributes

SELECT price, category
FROM Product;


--------------------------------------------------------------------------------
-- some minor variations: DISTINCT and ORDER BY

-- This query returns duplicates:
SELECT category
FROM Product;

-- Wait a minute... didn't we say that relations were sets? Why
-- do we suddently see bags? Why isn't the DBMS eliminating duplicates?
-- Key reason is performance: eliminating duplicates is an expensive operations.
-- So the DBMS will leave them if the user/application can tolerate them. 
-- (Later we will learn that we also need to retain duplicates when we compute aggregate values.)

-- To eliminate duplicates, use DISTINCT:

SELECT DISTINCT category
FROM Product;

-- We can also order the outputs using ORDER BY

-- order alphabetically by name:
SELECT *
FROM product
ORDER BY pname;

-- order by price descending
SELECT *
FROM product
ORDER BY price desc;

-- order by manufacturer, then price descenting
SELECT *
FROM product
ORDER BY manufacturer, price desc;
