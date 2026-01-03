UPDATE SALEORDER s
JOIN (
 SELECT s.OrderID, s.Status 
 FROM SALEORDER s 
 JOIN PAYMENT p ON s.OrderID = p.OrderID 
 WHERE p.Status = 'PAID'
) AS t ON t.OrderID = s.OrderID
SET s.Status = 'PAID';