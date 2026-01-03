SELECT Size, SUM(QuantitySold) AS total_quantity 
FROM SalesData 
WHERE Gender= 'Women' AND YEAR(SaleDate) = 2025
GROUP BY Size
ORDER BY total_quantity DESC, Size ASC
LIMIT 1;