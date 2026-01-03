SELECT c.CustID, c.CustomerName, SUM(s.TotalAmount) AS TotalSpent 
FROM Customer c 
JOIN SaleOrder s ON c.CustID = s.CustID AND year(s.OrderDate) = 2024
WHERE s.Status <> 'CANCELLED'
GROUP BY c.CustID, c.CustomerName 
HAVING TotalSpent >= 1000;