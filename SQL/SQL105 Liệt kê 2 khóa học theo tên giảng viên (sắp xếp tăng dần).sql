SELECT t.username,
    t.dept,
    t.number,
    c.title
FROM Teaches t
    JOIN Instructor i ON t.username = i.username
    JOIN Class c ON t.dept = c.dept
    AND t.number = c.number
ORDER BY i.fname
LIMIT 2;