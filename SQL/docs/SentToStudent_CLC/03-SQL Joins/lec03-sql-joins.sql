-- Recreate the database from lecture 2 with a few minor changes:
--  * Company is simplified.
--  * Company.name is now cname and Product.name is now pname so that there is
--    no ambiguity when joined.

CREATE TABLE Company(
   cname VARCHAR(20) PRIMARY KEY,
   country VARCHAR(20));

INSERT INTO Company VALUES ('GizmoWorks', 'USA');
INSERT INTO Company VALUES ('Canon',    'Japan');
INSERT INTO Company VALUES ('Hitachi',  'Japan');

CREATE TABLE Product(
   pname VARCHAR(20) PRIMARY KEY,
   price float,
   category VARCHAR(20),
   manufacturer VARCHAR(20) references Company);

PRAGMA foreign_keys=ON;

INSERT INTO Product VALUES ('Gizmo',      19.99, 'gadget', 'GizmoWorks');
INSERT INTO Product VALUES ('PowerGizmo', 29.99, 'gadget', 'GizmoWorks');
INSERT INTO Product VALUES ('SingleTouch', 149.99, 'photography', 'Canon');
INSERT INTO Product VALUES ('MultiTouch', 199.99, 'photography', 'Hitachi');
INSERT INTO Product VALUES ('SuperGizmo', 49.99, 'gadget', 'Hitachi');

-- Before we start, let's switch to a better query output format
.mode column
.header ON

--------------------------------------------------------------------------------
-- 1. INNER JOINS/SELF-JOINS

-- What should the following query return?

SELECT pname, price
FROM Product, Company
WHERE manufacturer=cname and country='Japan' and price < 150;

-- Note: manufacturer=cname is the "join predicate"

-- Exercise: Retreive all American companies that manufacture products in the
--           'gadget' category
SELECT DISTINCT cname
FROM Product, Company
WHERE country = 'USA' AND category = 'gadget'
AND manufacturer = cname;

-- Exercise: Retreive all Japanese companies that manufacture products in both
--           the 'gadget' and the 'photography' categories
SELECT DISTINCT cname
FROM Product P1, Product P2, Company
WHERE country = 'Japan' 
AND P1.category = 'gadget'
AND P2.category = 'photography' 
AND P1.manufacturer = cname AND P2.manufacturer = cname;

--------------------------------------------------------------------------------
-- 2. OUTER JOINS

-- Two tables: Employee(id, name) and Sales(employeeID, productID)
-- The tables have the following content
-- (1,'John')        (1, 344)
-- (2,'Jane')        (2, 414)
-- (3,'Jack')        (2, 544)
-- If we run a simple join, Jack will not appear in the result
-- because she did not make any sells. 
-- If we run a left outer join, Jack will be returned with a null sale.
-- We can similarly do right joins and full outer joins (but not in sqlite)

-- Here is the example to run in sqlite:
CREATE TABLE Employee(id int, name VARCHAR(10));
CREATE TABLE Sales(employeeID int, productID int);
INSERT INTO Employee VALUES (1,'John');
INSERT INTO Employee VALUES (2,'Jane');
INSERT INTO Employee VALUES (3,'Jack');

INSERT INTO Sales VALUES (1,344);
INSERT INTO Sales VALUES (2,414);
INSERT INTO Sales VALUES (2,544);

-- The following will miss Jack
SELECT * FROM Employee E, Sales S WHERE E.id = S.employeeID;

-- This is the same as above but with a different syntax:
SELECT * FROM Employee E INNER JOIN Sales S ON E.id = S.employeeID;

-- The following will include Jack
SELECT * FROM Employee E LEFT OUTER JOIN Sales S ON E.id = S.employeeID;