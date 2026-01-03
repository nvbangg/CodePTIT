SELECT ProductID, SUM(QuantitySold) AS total_quantity 
FROM SalesData 
WHERE Gender = 'Women' AND YEAR(SaleDate) = 2025
GROUP BY Gender, ProductID
HAVING total_quantity >= 10
ORDER BY total_quantity DESC;