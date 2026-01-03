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


--- a) Tìm nhà sản xuất và tốc độ của các laptop có ổ cứng ít nhất 30 GB.
SELECT p.maker, l.speed
FROM Product p
JOIN Laptop l ON p.model = l.model
WHERE l.hd >= 30;

--- b) Tìm model và giá của tất cả các sản phẩm (các loại) được làm bởi nhà sản xuất B.
SELECT p.model, price
FROM Product p
JOIN PC pc ON p.model = pc.model
WHERE p.maker = 'B'
UNION
SELECT p.model, price
FROM Product p
JOIN Laptop l ON p.model = l.model
WHERE p.maker = 'B'
UNION
SELECT p.model, price
FROM Product p
JOIN Printer pr ON p.model = pr.model
WHERE p.maker = 'B';


--- c) Tìm những nhà sản xuất có bán Laptop nhưng không bán PC.
SELECT DISTINCT p.maker
FROM Product p
JOIN Laptop l ON p.model = l.model
WHERE p.maker NOT IN (
    SELECT DISTINCT p2.maker
    FROM Product p2
    JOIN PC pc ON p2.model = pc.model
);


--- ! d) Tìm những kích thước ổ cứng xuất hiện ở 2 hoặc nhiều mẫu PC khác nhau.
SELECT hd
FROM PC
GROUP BY hd
HAVING COUNT(DISTINCT model) >= 2;


--- ! e) Tìm những cặp mẫu PC có cùng tốc độ và RAM. Mỗi cặp chỉ được liệt kê 1 lần. VD liệt kê cặp (i, j) thì thôi không liệt kê (j, i)
SELECT a.model AS model1, b.model AS model2
FROM PC a
JOIN PC b ON a.speed = b.speed AND a.ram = b.ram AND a.model < b.model;


--- !! f) Tìm những nhà sản xuất có ít nhất 2 mẫu máy tính khác nhau (PC hoặc Laptop) với tốc độ ít nhất à 3.0.
SELECT maker
FROM Product p
JOIN (
    SELECT model, speed FROM PC WHERE speed >= 3.0
    UNION ALL
    SELECT model, speed FROM Laptop WHERE speed >= 3.0
) AS temp ON p.model = temp.model
GROUP BY p.maker
HAVING COUNT(DISTINCT p.model) >= 2;
