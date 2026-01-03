SELECT s.OrderID, c.CustomerName, s.OrderDate, s.TotalAmount
FROM Customer c 
JOIN SaleOrder s ON c.CustID = s.CustID
ORDER BY s.OrderID;