SELECT AVG(QuantitySold) AS avg_quantity 
FROM SalesData 
WHERE Size = 36 AND YEAR(SaleDate) = 2025 AND MONTH(SaleDate) = 5
GROUP BY Size;