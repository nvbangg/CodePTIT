SELECT SUM(QuantitySold) AS total_quantity 
FROM SalesData 
WHERE Size = 36 AND Gender = 'Women' 
 AND SaleDate BETWEEN '2025-05-01' AND '2025-05-31';