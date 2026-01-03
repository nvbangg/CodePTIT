DELETE ca 
FROM CustomerArchive ca 
JOIN Customer c ON c.CustID = ca.CustID 
WHERE (
 SELECT COALESCE(SUM(s1.TotalAmount), 0)
 FROM SaleOrder s1
 WHERE s1.OrderDate <'2024-01-01' AND s1.CustID = c.CustID
) < 500

AND c.CustID NOT IN
(
 SELECT CustID 
 FROM SaleOrder s2
 WHERE s2.OrderDate >= '2024-01-01'
);