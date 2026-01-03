SELECT 
 c.CustomerName,
 COALESCE(SUM(CASE WHEN p.Status = 'PAID' THEN s.Total ELSE 0 END), 0) AS PaidTotal
FROM 
 CUSTOMER c
LEFT JOIN 
 SALEORDER s ON c.CustID = s.CustID
LEFT JOIN 
 PAYMENT p ON s.OrderID = p.OrderID
GROUP BY 
 c.CustID, c.CustomerName
ORDER BY 
 c.CustomerName ASC;