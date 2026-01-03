INSERT INTO VipCustomer (CustID, CustomerName, City, TotalSpent2024)
SELECT c.CustID, c.CustomerName, c.City, SUM(s.TotalAmount) AS TotalSpent2024
FROM Customer c 
JOIN SaleOrder s ON c.CustID = s.CustID 
WHERE YEAR(s.OrderDate) = 2024 
GROUP BY c.CustomerName, c.CustID 
HAVING TotalSpent2024 >= 2000;