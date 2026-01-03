SELECT s.OrderID , c.CustomerName
FROM SALEORDER s
JOIN CUSTOMER c ON s.CustID = c.CustID
ORDER BY s.OrderID;