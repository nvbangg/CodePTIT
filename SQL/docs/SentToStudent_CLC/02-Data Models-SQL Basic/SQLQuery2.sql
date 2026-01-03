/*
    DB Schema
*/

CREATE TABLE Class (
       dept VARCHAR(6),
       number INTEGER,
       title VARCHAR(75),
       PRIMARY KEY (dept, number)
);

CREATE TABLE Instructor (
       username VARCHAR(8),
       fname VARCHAR(50),
       lname VARCHAR(50),
       started_on CHAR(10),
       PRIMARY KEY (username)
);


CREATE TABLE Teaches (
       username VARCHAR(8),
       dept VARCHAR(6),
       number INTEGER,
       PRIMARY KEY (username, dept, number),
       FOREIGN KEY (username) REFERENCES Instructor(username),
       FOREIGN KEY (dept, number) REFERENCES Class(dept, number)
);


/* 
   Dữ liệu mẫu 
 */

INSERT INTO Class
       VALUES('CSE', 378, 'Machine Organization and Assembly Language');
INSERT INTO Class
       VALUES('CSE', 451, 'Introduction to Operating Systems');
INSERT INTO Class
       VALUES('CSE', 461, 'Introduction to Computer Communication Networks');

INSERT INTO Instructor
       VALUES('zahorjan', 'John', 'Zahorjan', '1985-01-01');
INSERT INTO Instructor
       VALUES('djw', 'David', 'Wetherall', '1999-07-01');
INSERT INTO Instructor
       VALUES('tom', 'Tom', 'Anderson', '1997-10-01');
INSERT INTO Instructor
       VALUES('levy', 'Hank', 'Levy', '1988-04-01');

INSERT INTO Teaches
       VALUES('zahorjan', 'CSE', 378);
INSERT INTO Teaches
       VALUES('tom', 'CSE', 451);
INSERT INTO Teaches
       VALUES('tom', 'CSE', 461);
INSERT INTO Teaches
       VALUES('zahorjan', 'CSE', 451);
INSERT INTO Teaches
       VALUES('zahorjan', 'CSE', 461);
INSERT INTO Teaches
       VALUES('djw', 'CSE', 461);
INSERT INTO Teaches
       VALUES('levy', 'CSE', 451);




/*
   Các yêu cầu truy vấn: Gõ câu truy vấn vào bên dưới. Lưu ý kết quả đã được gợi ý.
 */

--1 Các khóa học nào đang được mở?

SELECT title FROM Class;

--title                                     
------------------------------------------
--Machine Organization and Assembly Language
--Introduction to Operating Systems         
--Introduction to Computer Communication Net

-- 2. Liệt kê 2 khóa học được dạy bởi mỗi Instructor (sắp xếp theo tên tăng dần)

SELECT username, dept, number
FROM Teaches
ORDER BY username 
OFFSET 0 ROWS FETCH NEXT 2 ROWS ONLY;

SELECT TOP 2 t.username, t.dept, t.number
FROM Teaches t
JOIN Instructor i ON t.username = i.username
ORDER BY i.username ASC, t.number

--username    dept        number    
------------  ----------  ----------
--djw         CSE         461       
--levy        CSE         451 

--3. Liệt kê 2 khóa học được dạy bởi mỗi Instructor (sắp xếp theo tên giảm dần) 
SELECT username, dept, number
FROM Teaches
ORDER BY username DESC
OFFSET 0 ROWS FETCH NEXT 2 ROWS ONLY;

SELECT TOP 2 t.username, t.dept, t.number
FROM Teaches t
JOIN Instructor i ON t.username = i.username
ORDER BY i.username DESC, t.number
--username    dept        number    
------------  ----------  ----------
--zahorjan    CSE         461       
--zahorjan    CSE         451 

--4. Tên (firstname) của Instructor có tên đăng nhập (login) là 'zahorjan'?
SElECT fname 
FROM Instructor
WHERE username = 'zahorjan'
--fname     
------------
--John 

--5. Các khóa học cấp độ 400 (4xx) của CSE đang mở là gì?
SELECT dept, number, title
FROM Class
WHERE dept = 'CSE' and number LIKE '4%'
--dept        number      title                            
------------  ----------  ---------------------------------
--CSE         451         Introduction to Operating Systems
--CSE         461         Introduction to Computer Communic


--6. Những lớp nào đang dạy bởi levy hoặc djw?
SELECT username, dept, number
FROM Teaches
WHERE username in ('djw', 'levy')

--username    dept        number    
------------  ----------  ----------
--djw         CSE         461       
--levy        CSE         451


--7. Những khóa học nào có tên bắt đầu bằng "Introduction"?
SELECT dept, number, title
FROM Class
WHERE title LIKE 'Introduction%'

--dept        number      title                            
------------  ----------  ---------------------------------
--CSE         451         Introduction to Operating Systems
--CSE         461         Introduction to Computer Communic



--8. Nếu gõ nhầm Introduction thành INtroduction, làm thế nào để vẫn ra kết quả đúng?
SELECT dept, number, title
FROM Class
WHERE title LIKE 'INtroduction%'
--dept        number      title                            
------------  ----------  ---------------------------------
--CSE         451         Introduction to Operating Systems
--CSE         461         Introduction to Computer Communic


--9. Hiển thị tên khóa học và độ dài của nó
SELECT title, DATALENGTH(title) AS [LENGTH(title)]
FROM Class

--title                                       LENGTH(title)
--------------------------------------------  -------------
--Machine Organization and Assembly Language  42           
--Introduction to Operating Systems           33           
--Introduction to Computer Communication Net  47 




--10. Cắt tên các khóa học về còn 12 ký tự
SELECT dept, number, SUBSTRING(title, 1, 12) AS short_title
FROM Class

--dept        number      short_title 
------------  ----------  ------------
--CSE         378         Machine Orga
--CSE         451         Introduction
--CSE         461         Introduction



--11. Những instructors nào bắt đầu dạy trước 1990?
SELECT username, fname, lname, started_on
FROM Instructor
WHERE CAST(SUBSTRING(started_on, 1, 4) AS INT) < 1990
ORDER BY started_on ASC
--username    fname       lname       started_on
------------  ----------  ----------  ----------
--zahorjan    John        Zahorjan    1985-01-01
--levy        Hank        Levy        1988-04-01



--12. Những instructors nào bắt đầu dạy trước thời điểm hiện tại?
-- (Hopefully, this is all of them!)
SELECT username, fname, lname, started_on
FROM Instructor
WHERE CAST(started_on AS DATE) < CAST(GETDATE() AS DATE)
ORDER BY username
--username    fname       lname       started_on
------------  ----------  ----------  ----------
--zahorjan    John        Zahorjan    1985-01-01
--djw         David       Wetherall   1999-07-01
--tom         Tom         Anderson    1997-10-01
--levy        Hank        Levy        1988-04-01  *****



--13. Những instructors bắt đầu dạy vào hoặc trước ngày 1 tháng 1 của 20 năm trước?
SELECT
    username,
    fname,
    lname,
    started_on
FROM
    Instructor
WHERE
    started_on >= DATE_SUB(CURDATE(), INTERVAL 20 YEAR)
    AND DAY(started_on) = 1
    AND MONTH(started_on) = 1;
--username    fname       lname       started_on
------------  ----------  ----------  ----------
--djw         David       Wetherall   1999-07-01
--tom         Tom         Anderson    1997-10-01

