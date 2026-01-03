SELECT s.OrderID, c.CustomerName,COUNT(*) AS TotalLines
FROM Customer c
JOIN SaleOrder s ON c.CustID = s.CustID 
JOIN OrderItem o ON s.OrderID = o.OrderID 
GROUP BY s.OrderID 
HAVING COUNT(*) >= 2
ORDER BY s.OrderID;