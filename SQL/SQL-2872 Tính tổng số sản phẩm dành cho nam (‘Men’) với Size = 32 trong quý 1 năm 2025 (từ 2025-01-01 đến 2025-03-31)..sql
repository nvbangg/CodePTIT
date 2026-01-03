SELECT SUM(QuantitySold) AS total_quantity 
FROM SalesData 
WHERE Gender = 'Men' AND Size = 32 AND (SaleDate BETWEEN '2025-01-01' AND '2025-03-31')
GROUP BY Gender, Size;