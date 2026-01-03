SELECT *
FROM Instructor
WHERE DATE(started_on) <= CURDATE();