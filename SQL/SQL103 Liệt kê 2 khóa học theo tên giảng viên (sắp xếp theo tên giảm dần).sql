SELECT i.username,
    t.dept,
    t.number
FROM Instructor i
    JOIN Teaches t ON i.username = t.username
ORDER BY i.lname DESC
LIMIT 2;