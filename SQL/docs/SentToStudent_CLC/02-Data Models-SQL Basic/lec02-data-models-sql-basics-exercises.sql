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
       VALUES('tom', 'Tom', 'Anderson', date('1997-10-01'));
INSERT INTO Instructor
       VALUES('levy', 'Hank', 'Levy', date('1988-04-01'));

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

-- Các khóa học nào đang được mở?


title                                     
------------------------------------------
Machine Organization and Assembly Language
Introduction to Operating Systems         
Introduction to Computer Communication Net



-- Liệt kê 2 khóa học được dạy bởi mỗi Instructor (sắp xếp theo tên tăng dần)

username    dept        number    
----------  ----------  ----------
djw         CSE         461       
levy        CSE         451 



-- Liệt kê 2 khóa học được dạy bởi mỗi Instructor (sắp xếp theo tên giảm dần) 

username    dept        number    
----------  ----------  ----------
zahorjan    CSE         461       
zahorjan    CSE         451 


-- Tên (firstname) của Instructor có tên đăng nhập (login) là 'zahorjan'?

fname     
----------
John 


-- Các khóa học cấp độ 400 (4xx) của CSE đang mở là gì?

dept        number      title                            
----------  ----------  ---------------------------------
CSE         451         Introduction to Operating Systems
CSE         461         Introduction to Computer Communic


-- Những lớp nào đang dạy bởi levy hoặc djw?

username    dept        number    
----------  ----------  ----------
djw         CSE         461       
levy        CSE         451



-- Những khóa học nào có tên bắt đầu bằng "Introduction"?

dept        number      title                            
----------  ----------  ---------------------------------
CSE         451         Introduction to Operating Systems
CSE         461         Introduction to Computer Communic



-- Nếu gõ nhầm Introduction thành INtroduction, làm thế nào để vẫn ra kết quả đúng?

dept        number      title                            
----------  ----------  ---------------------------------
CSE         451         Introduction to Operating Systems
CSE         461         Introduction to Computer Communic


-- Hiển thị tên khóa học và độ dài của nó

title                                       LENGTH(title)
------------------------------------------  -------------
Machine Organization and Assembly Language  42           
Introduction to Operating Systems           33           
Introduction to Computer Communication Net  47 




-- Cắt tên các khóa học về còn 12 ký tự

dept        number      short_title 
----------  ----------  ------------
CSE         378         Machine Orga
CSE         451         Introduction
CSE         461         Introduction



-- Những instructors nào bắt đầu dạy trước 1990?

username    fname       lname       started_on
----------  ----------  ----------  ----------
zahorjan    John        Zahorjan    1985-01-01
levy        Hank        Levy        1988-04-01



-- Những instructors nào bắt đầu dạy trước thời điểm hiện tại?
-- (Hopefully, this is all of them!)

username    fname       lname       started_on
----------  ----------  ----------  ----------
zahorjan    John        Zahorjan    1985-01-01
djw         David       Wetherall   1999-07-01
tom         Tom         Anderson    1997-10-01
levy        Hank        Levy        1988-04-01



-- Những instructors bắt đầu dạy vào hoặc trước ngày 1 tháng 1 của 20 năm trước?

username    fname       lname       started_on
----------  ----------  ----------  ----------
djw         David       Wetherall   1999-07-01
tom         Tom         Anderson    1997-10-01

