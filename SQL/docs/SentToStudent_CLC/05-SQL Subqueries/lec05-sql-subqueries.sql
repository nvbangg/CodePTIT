CREATE TABLE Company(
   cid VARCHAR(5) PRIMARY KEY,
   cname VARCHAR(20),
   city VARCHAR(20));

INSERT INTO Company VALUES ('123','GizmoWorks', 'New York');
INSERT INTO Company VALUES ('234','Canon',    'Tokyo');
INSERT INTO Company VALUES ('345','Hitachi',  'Tokyo');

CREATE TABLE Product(
   pname VARCHAR(20) PRIMARY KEY,
   price float,
   cid VARCHAR(5) references Company);

PRAGMA foreign_keys=ON;

INSERT INTO Product VALUES ('Gizmo',      19.99, '123');
INSERT INTO Product VALUES ('PowerGizmo', 29.99, '123');
INSERT INTO Product VALUES ('SingleTouch', 149.99, '234');
INSERT INTO Product VALUES ('MultiTouch', 199.99, '345');
INSERT INTO Product VALUES ('SuperGizmo', 49.99, '345');

-- Before we start, let's switch to a better query output format
.mode column
.header ON

--------------------------------------------------------------------------------
-- 1. Subqueries in WHERE

--- For each product, return the city where it is manufactured

SELECT X.pname, ( SELECT Y.city
                  FROM Company Y
                  WHERE Y.cid=X.cid) as City
FROM  Product X

--- Or Equivalent

SELECT X.pname, Y.city  FROM  Product X, Company Y  WHERE X.cid=Y.cid

--- Compute the number of products made by each company

SELECT DISTINCT C.cname, ( SELECT count(*)
                           FROM Product P  
                           WHERE P.cid=C.cid)
FROM  Company C

--- Unnest it using GROUP BY

SELECT C.cname, count(*)  FROM Company C, Product P  WHERE C.cid=P.cid

--- GROUP bY with OUTER JOIN

SELECT C.cname, count(pname)
FROM Company C LEFT OUTER JOIN Product P  ON C.cid=P.cid
GROUP BY C.cname

-- 2. Subqueries in FROM

--- Find all products whose prices is > 20 and < 500

SELECT X.pname
FROM (SELECT * FROM Product AS Y WHERE price > 20) as X  
WHERE X.price < 500

--- Unnest above query

SELECT pname  
FROM Product
WHERE price > 20 AND price < 500

--- Find all companies that make some products with price < 100

---- Using EXISTS

SELECT DISTINCT   C.cname
FROM  Company C  WHERE  
   EXISTS (SELECT *
               FROM Product P
               WHERE C.cid = P.cid and P.price < 100)

---- Using IN

SELECT DISTINCT   C.cname
FROM  Company C
WHERE C.cid IN (SELECT P.cid
                  FROM Product P  
                  WHERE P.price < 100)

---- Using ANY (Not supported in SQLite !!!)

SELECT DISTINCT   C.cname
FROM  Company C
WHERE 100 > ANY (SELECT price
                  FROM Product P  
                  WHERE P.cid = C.cid)

---- Unnest it -> Existential quantifiers are easy !

SELECT DISTINCT   C.cname
FROM  Company C, Product P  
WHERE   C.cid= P.cid and P.price < 100

--- Find all companies where all their products have price < 100

---- 1. Find the other companies with some product having price ≥ 100

SELECT DISTINCT   C.cname
FROM  Company C
WHERE C.cid IN (SELECT P.cid
                  FROM Product P  
                  WHERE P.price >= 100)

---- 2. Find all companies where all their products have price < 100

SELECT DISTINCT   C.cname
FROM  Company C
WHERE C.cid NOT IN (SELECT P.cid
                     FROM Product P  
                     WHERE P.price >= 100)

---- Using EXISTS

SELECT DISTINCT   C.cname
FROM  Company C
WHERE NOT EXISTS (SELECT *
                  FROM Product P
                  WHERE P.cid = C.cid and P.price >= 100)

---- Using ALL (Not supported in SQLite !!!)

SELECT DISTINCT   C.cname
FROM  Company C
WHERE 100 >= ALL  (SELECT price
                     FROM Product P  
                     WHERE P.cid = C.cid)

---- Unnest it -> This kind of query can not be unnested !!!

------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------
-- EXERCISE: Viết các truy vấn theo yêu cầu, dựa trên cấu trúc CSDL như dưới đây

---- Product(maker, model, type)
---- PC(model, speed, ram, hd, price) 
---- Laptop(model, speed, ram, hd, screen, price) 
---- Printer(model, color, type, price)

---  Yêu cầu sử dụng ít nhất một truy vấn con trong câu trả lời và viết các truy vấn sử dụng 2 cách khác nhau 
--- (e.g., sử dụng kết hợp các toán tử khác nhau EXISTS, IN, ALL, ANY).

--- 1. Tìm nhãn hiệu (maker) của các PC có tốc độ ít nhất là 3.0

--- 2. Tìm các máy in có giá cao nhất

--- 3. !Tìm các laptops có tốc độ thấp hơn tốc độ của một PC bất kỳ

--- 4. !Tìm model của các sản phẩm (PC, laptop, or printer) có giá cao nhất

--- 5. !Tìm nhãn hiệu (maker) của các máy in màu với giá thấp nhất

--- 6. !!Tìm nhãn hiệu (maker) của các PC với bộ xử lý có tốc độ cao nhất trong các PC có dung lượng RAM thấp nhất