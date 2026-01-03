SELECT c.CustID, c.CustomerName 
FROM Customer c 
JOIN SaleOrder s ON s.CustID = c.CustID AND (YEAR(s.OrderDate) = 2023 OR YEAR(s.OrderDate) = 2024)
JOIN Payment p ON p.OrderID = s.OrderID AND p.Status = 'PAID'
GROUP BY c.CustID, c.CustomerName 
HAVING SUM(CASE WHEN YEAR(s.OrderDate) = 2023 THEN p.Amount ELSE 0 END) >= 500
 AND SUM(CASE WHEN YEAR(s.OrderDate) = 2024 THEN p.Amount ELSE 0 END) >= 500;