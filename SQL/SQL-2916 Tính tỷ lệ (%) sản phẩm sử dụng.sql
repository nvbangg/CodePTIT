SELECT p.country, ROUND(100.0 * SUM(CASE WHEN pt.recycled_materials = TRUE THEN 1 ELSE 0 END) / COUNT(p.product_id), 2) AS recycle_rate 
FROM Products p 
JOIN ProductTransparency pt ON p.product_id = pt.product_id 
WHERE p.country IN (SELECT country FROM SupplyChainViolations)
GROUP BY p.country 
HAVING COUNT(p.product_id) >= 2
ORDER BY recycle_rate DESC, p.country ASC;