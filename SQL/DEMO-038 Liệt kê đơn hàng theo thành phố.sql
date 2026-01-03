SELECT s.OrderID, c.CustomerName, s.OrderDate, s.TotalAmount
FROM Customer c 
JOIN SaleOrder s ON c.CustID = s.CustID
WHERE c.City = 'Ha Noi' AND s.TotalAmount > 500;