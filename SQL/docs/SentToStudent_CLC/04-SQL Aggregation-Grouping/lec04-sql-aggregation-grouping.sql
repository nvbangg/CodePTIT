--------------------------------------------------------------------------------
-- AGGREGATES AND GROUPING IN SQL
-- Readings: 6.3, 6.4
--------------------------------------------------------------------------------

-- In this lecture we will use the following schema:

create table Purchase(
   pid int primary key,
   product text,
   price float,
   quantity int,
   month varchar(15));

-- download the file lec04-data.txt in the current directory
-- use .import to import the data; see .help
-- note that other database systems have different ways to import data

.import lec04-data.txt Purchase

update purchase set price = null where price = 'null';

-- the five basic aggregate operations

select count(*) from purchase;

select count(quantity) from purchase;

select sum(quantity) from purchase;

select avg(price) from purchase;

select max(quantity) from purchase;

select min(quantity) from purchase;

-- Null values are not used in the aggregate

insert into Purchase values(12, 'gadget', NULL, NULL, 'april');

select count(*) from purchase;
select count(quantity) from purchase;
select sum(quantity) from purchase;
select sum(quantity) from purchase where quantity is not null;  -- same thing

-- Counting the number of distinct values

select count(product) from purchase;
select count(distinct product) from purchase;

--------------------------------------------------------------------------------
-- Aggregates With Group-by

select product, count(*)
from purchase
group by product;

select month, count(*)
from purchase
group by month;

-- compare the previous two queries:
--   1. for each PRODUCT compute count(*), v.s.
--   2. for each MONTH compute count(*)

-- aggregates over expressions

-- compute the total revenue for each product:
select product, sum(price*quantity)
from purchase
group by product;


-- compute the average revenue per sale, for each product:
select product, sum(price*quantity)/count(*)
from purchase
group by product;


-- what do these queries do ?
select product, max(month)
from purchase
group by product;

select product, min(month), max(month)
from purchase
group by product;

select product, month
from purchase
group by product;
-- note: sqlite is WRONG on the last query.  why ?


--------------------------------------------------------------------------------
-- Ordering results by aggregate

select product, sum(price*quantity) as rev
from purchase
group by product
order by rev desc;

select month, sum(price*quantity)/count(*) as avgrev
from purchase
group by month
order by avgrev desc;



--------------------------------------------------------------------------------
-- Grouping with WHERE

-- 11 tuples:
select * from purchase;

-- 4 groups:
select product, count(*)
from purchase
group by product;

-- 3 groups:
select product, count(*)
from purchase
where price > 2.0
group by product;


--------------------------------------------------------------------------------
-- the HAVING clause

select month, count(*) 
from purchase
group by month;


select month,  count(*), sum(price*quantity)/count(*)
from purchase
group by month
having sum(price*quantity)/count(*) < 100.0;

-- Rule
--   WHERE condition is applied to individual rows: 
--         the rows may or may not contributed to the aggregate
--         no aggregates allowed here
--   HAVING condition is applied to the entire group:
--         entire group is returned, or not al all
--         may use aggregate functions in the group


--------------------------------------------------------------------------------
-- "DISTINCT" is (basically) the same as "GROUP BY"

select month, count(*)
from purchase
group by month;

select month
from purchase
group by month;

select distinct month
from purchase;



--------------------------------------------------------------------------------
-- aggregates and joins

create table Product(
   pid int primary key,
   pname text,
   manufacturer text);

insert into product values(1, 'bagel', 'Sunshine Co.');
insert into product values(2, 'banana', 'BusyHands');
insert into product values(3, 'gizmo', 'GizmoWorks');
insert into product values(4, 'gadget', 'BusyHands');
insert into product values(5, 'powerGizmo', 'PowerWorks');


-- number of sales per manufacturer
select x.manufacturer, count(*)
from Product x, Purchase y
where x.pname = y.product
group by x.manufacturer;

-- number of sales per manufacturer and month
select x.manufacturer, y.month, count(*)
from Product x, Purchase y
where x.pname = y.product
group by x.manufacturer, y.month;


--------------------------------------------------------------------------------
--  Semantics of SQL queries with Group By
--
--     SELECT a1, a2, ..., agg1, agg2, ...
--     FROM R1, R2, ...
--     WHERE C
--     GROUP BY g1, g2, ...
--     HAVING D
--
-- Syntactic rules:
--    C is any condition on the attributes in R1, R2, ...
--    D is any condition on the attributes in R1, R2, ... AND aggregates
--    all attributes a1, a2, ... must occur in the GROUP BY clause (WHY ?)
--
-- Semantics:
--    Step 1. Evaluate the FROM-WHERE part of the query using the "nested loop" semantics
--    Step 2. Group answers by their values of g1, g2, ...
--    Step 3. Compute the aggregates in D for each goup: retain only groups where D is true
--    Step 4. Compute the aggregates in SELECT and return the answer
--
-- Important notes:
--    there is one row in the answer for each group
--    no group can be empty !  In particular, count(*) is never 0

--------------------------------------------------------------------------------
-- Aggregates on empty groups

-- number of sales per manufacturer: but PowerWorks does not appear !
select x.manufacturer, count(*)
from Product x, Purchase y
where x.pname = y.product
group by x.manufacturer;

select x.manufacturer, count(y.pid)
from Product x left outer join Purchase y on x.pname = y.product
group by x.manufacturer;

---------------------------------------------------------------------------------
---------------------------------------------------------------------------------
-- EXERCISE: Viết các truy vấn SQL theo các yêu cầu, với cấu trúc CSDL cho bên dưới

--- Product(maker,model, type)
--- PC(model, speed, ram, hd, price) 
--- Laptop(model, speed, ram, hd, screen, price) 
--- Printer(model, color, type, price)

--- a) Tìm tốc độ trung bình của các PC.


--- b) Tìm tốc độ trung bình của các Laptop có giá > 1000$


--- c) Tìm giá trung bình của các PC được sản xuất bới nhà sản xuất (manufacturer) "A"


--- ! d) Tìm giá trung bình của các PC và Laptop được sản xuất bới nhà sản xuất (manufacturer) "D"


--- e) Tìm giá trung bình của PC theo từng tốc độ


--- ! f) Tìm kích thước màn hình trung bình của laptop theo từng nhà sản xuất (manufacturer)


--- ! g) Tìm các nhà sản xuất (manufacturers) có sản xuất ra ít nhất 3 mẫu PC


--- ! h) Với mỗi nhà sản xuất có sản xuất (manufacturer) PC, tìm giá PC cao nhất của nhà sản xuất đó


--- ! i) Tính giá trung bình theo tốc độ PC với các PC có tốc độ > 2.0


--- !! j) Tìm kích thước ổ cứng trung bình của PC của các nhà sản xuất (manufacturer) có sản xuất máy in
