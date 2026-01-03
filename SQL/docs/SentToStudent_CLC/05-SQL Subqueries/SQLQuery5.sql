CREATE TABLE Product (
    maker VARCHAR(255),
    model INT PRIMARY KEY,
    type VARCHAR(50)
);

-- Bảng PC
CREATE TABLE PC (
    model INT PRIMARY KEY,
    speed DECIMAL(4, 2),
    ram INT,
    hd INT,
    price INT,
    FOREIGN KEY (model) REFERENCES Product(model)
);

-- Bảng Laptop
CREATE TABLE Laptop (
    model INT PRIMARY KEY,
    speed DECIMAL(4, 2),
    ram INT,
    hd INT,
    screen DECIMAL(4, 1),
    price DECIMAL(10, 1),
    FOREIGN KEY (model) REFERENCES Product(model)
);

-- Bảng Printer
CREATE TABLE Printer (
    model INT PRIMARY KEY,
    color VARCHAR(50),
    type VARCHAR(50),
    price INT,
    FOREIGN KEY (model) REFERENCES Product(model)
);

INSERT INTO Product (maker, model, type) VALUES
('A', 1001, 'pc'),
('A', 1002, 'pc'),
('A', 1003, 'pc'),
('A', 2004, 'laptop'),
('A', 2005, 'laptop'),
('A', 2006, 'laptop'),
('B', 1004, 'pc'),
('B', 1005, 'pc'),
('B', 1006, 'pc'),
('B', 2007, 'laptop'),
('C', 1007, 'pc'),
('D', 1008, 'pc'),
('D', 1009, 'pc'),
('D', 1010, 'pc'),
('D', 3004, 'printer'),
('D', 3005, 'printer'),
('E', 1011, 'pc'),
('E', 1012, 'pc'),
('E', 1013, 'pc'),
('E', 2001, 'laptop'),
('E', 2002, 'laptop'),
('E', 2003, 'laptop'),
('E', 3001, 'printer'),
('E', 3002, 'printer'),
('E', 3003, 'printer'),
('F', 2008, 'laptop'),
('F', 2009, 'laptop'),
('G', 2010, 'laptop'),
('H', 3006, 'printer'),
('H', 3007, 'printer');

INSERT INTO PC (model, speed, ram, hd, price) VALUES
(1001, 2.66, 1024, 250, 2114),
(1002, 2.1, 512, 300, 250),
(1003, 1.42, 512, 320, 80),
(1004, 2.8, 1024, 250, 649),
(1005, 3.2, 512, 160, 250),
(1006, 3.2, 1024, 320, 1049),
(1007, 2.2, 1024, 200, 510),
(1008, 2.2, 2048, 250, 770),
(1009, 2.0, 1024, 250, 650),
(1010, 2.8, 2048, 300, 770),
(1011, 1.86, 2048, 160, 959),
(1012, 2.8, 1024, 160, 649),
(1013, 3.06, 512, 80, 529);

INSERT INTO Laptop (model, speed, ram, hd, screen, price) VALUES
(2001, 2.0, 2048, 240, 20.1, 3673),
(2002, 1.73, 1024, 80, 17.0, 949),
(2003, 1.8, 512, 100, 15.4, 600),
(2004, 2.0, 512, 120, 13.3, 1330),
(2005, 2.16, 1024, 120, 17.0, 2500),
(2006, 2.0, 2048, 80, 15.4, 1700),
(2007, 1.83, 1024, 120, 13.3, 1429),
(2008, 1.6, 1024, 100, 15.4, 900),
(2009, 1.6, 512, 100, 80.0, 1410),
(2010, 2.0, 2048, 160, 15.4, 2300);

INSERT INTO Printer (model, color, type, price) VALUES
(3001, 'TRUE', 'ink-jet', 99),
(3002, 'FALSE', 'laser', 239),
(3003, 'TRUE', 'laser', 899),
(3004, 'TRUE', 'ink-jet', 120),
(3005, 'FALSE', 'laser', 120),
(3006, 'TRUE', 'nk-jet', 100),
(3007, 'TRUE', 'laser', 200);

-- EXERCISE: Viết các truy vấn theo yêu cầu, dựa trên cấu trúc CSDL như dưới đây

---- Product(maker, model, type)
---- PC(model, speed, ram, hd, price) 
---- Laptop(model, speed, ram, hd, screen, price) 
---- Printer(model, color, type, price)

---  Yêu cầu sử dụng ít nhất một truy vấn con trong câu trả lời và viết các truy vấn sử dụng 2 cách khác nhau 
--- (e.g., sử dụng kết hợp các toán tử khác nhau EXISTS, IN, ALL, ANY).

--- 1*. Tìm nhãn hiệu (maker) của các PC có tốc độ ít nhất là 3.0
--c1: IN
SELECT maker
FROM Product
WHERE model IN (
    SELECT model
    FROM PC
    WHERE speed >= 3.0
);

--c2: EXISTS
SELECT DISTINCT Product.maker
FROM Product
WHERE EXISTS (
    SELECT 1
    FROM PC
    WHERE PC.model = Product.model AND PC.speed >= 3.0
);

--- 2. Tìm các máy in có giá cao nhất
--c1: MAX
SELECT model, color, type, price
FROM Printer
WHERE price = (SELECT MAX(price) FROM Printer);

--c2: ALL
SELECT model, color, type, price
FROM Printer
WHERE price >= ALL (SELECT price FROM Printer);

--- 3. !Tìm các laptops có tốc độ thấp hơn tốc độ của một PC bất kỳ
--c1: ANY
SELECT model, speed, ram, hd, screen, price
FROM Laptop
WHERE speed < ANY (SELECT speed FROM PC);

--c2: EXISTS
SELECT model, speed, ram, hd, screen, price
FROM Laptop AS L
WHERE EXISTS (
    SELECT 1
    FROM PC AS P
    WHERE L.speed < P.speed
);

--- 4*. !Tìm model của các sản phẩm (PC, laptop, or printer) có giá cao nhất
--c1: UNION ALL, MAX
SELECT model
FROM Product
WHERE model IN (
    SELECT model FROM PC WHERE price = (SELECT MAX(price) FROM PC)
    UNION ALL
    SELECT model FROM Laptop WHERE price = (SELECT MAX(price) FROM Laptop)
    UNION ALL
    SELECT model FROM Printer WHERE price = (SELECT MAX(price) FROM Printer)
);

--c2: ALL
SELECT model
FROM (
    SELECT model, price FROM PC
    UNION ALL
    SELECT model, price FROM Laptop
    UNION ALL
    SELECT model, price FROM Printer
) AS Products
WHERE price >= ALL (SELECT price FROM (
    SELECT price FROM PC
    UNION ALL
    SELECT price FROM Laptop
    UNION ALL
    SELECT price FROM Printer
) AS AllPrices);

--- 5. !Tìm nhãn hiệu (maker) của các máy in màu với giá thấp nhất
--c1: IN
SELECT maker
FROM Product
WHERE model IN (
    SELECT model
    FROM Printer
    WHERE color = 'TRUE' AND price = (SELECT MIN(price) FROM Printer WHERE color = 'TRUE')
);

--c2: EXISTS
SELECT DISTINCT Product.maker
FROM Product
JOIN Printer ON Product.model = Printer.model
WHERE Printer.color = 'TRUE'
AND Printer.price = (SELECT MIN(price) FROM Printer WHERE color = 'TRUE');

--- 6*. !!Tìm nhãn hiệu (maker) của các PC với bộ xử lý có tốc độ cao nhất trong các PC có dung lượng RAM thấp nhất
--c1: IN
SELECT maker
FROM Product
WHERE model IN (
    SELECT model
    FROM PC
    WHERE speed = (SELECT MAX(speed) FROM PC WHERE ram = (SELECT MIN(ram) FROM PC))
);

--c2: EXISTS
SELECT DISTINCT Product.maker
FROM Product
JOIN PC ON Product.model = PC.model
WHERE PC.speed = (SELECT MAX(speed) FROM PC WHERE ram = (SELECT MIN(ram) FROM PC));
