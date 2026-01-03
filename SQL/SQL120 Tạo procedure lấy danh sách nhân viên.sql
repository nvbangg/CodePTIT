CREATE PROCEDURE GetEmployeeById(IN employeeId INT) BEGIN
SELECT *
FROM Employees
WHERE id = employeeId;
END;