SELECT 
 c.CustID, 
 c.CustomerName, 
 SUM(s.TotalAmount) AS TotalSpent
FROM 
 Customer c
JOIN 
 SaleOrder s ON c.CustID = s.CustID
WHERE 
 c.CustID IN (
 SELECT DISTINCT CustID 
 FROM SaleOrder 
 WHERE YEAR(OrderDate) = 2024 AND TotalAmount >= 500
 )
GROUP BY 
 c.CustID, c.CustomerName
HAVING 
 SUM(s.TotalAmount) >= 1000;