UPDATE Payment pm
JOIN (
 SELECT o.OrderID, SUM(p.Price * o.Qty) AS TotalAmount
 FROM OrderItem o
 JOIN Product p ON o.PID = p.PID
 GROUP BY o.OrderID
 HAVING TotalAmount >= 500
) AS t ON pm.OrderID = t.OrderID
SET pm.Status = 'PAID', 
 pm.PaidAt = '2025-01-01';