SELECT DISTINCT s.country, SUM(CASE WHEN pt.recycled_materials = TRUE THEN 1 ELSE 0 END) AS recycled_products_count 
FROM SupplyChainViolations s
JOIN Products p ON s.country = p.country
JOIN ProductTransparency pt ON p.product_id = pt.product_id 
WHERE s.num_violations >= 1
GROUP BY s.country
HAVING SUM(CASE WHEN pt.recycled_materials = TRUE THEN 1 ELSE 0 END) > 0
ORDER BY recycled_products_count DESC, p.country ASC;