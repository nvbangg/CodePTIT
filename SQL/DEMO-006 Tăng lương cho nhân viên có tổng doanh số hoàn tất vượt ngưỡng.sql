UPDATE EMPLOYEE e 
JOIN(
 SELECT e.Salary, e.EmpID
 FROM EMPLOYEE e 
 JOIN SALEORDER s ON s.EmpID = e.EmpID 
 WHERE s.Status = 'COMPLETED' 
 GROUP BY e.EmpID 
 HAVING SUM(s.TotalAmount) > 50000
) AS t ON t.EmpID = e.EmpID
SET e.Salary = e.Salary * 1.1;