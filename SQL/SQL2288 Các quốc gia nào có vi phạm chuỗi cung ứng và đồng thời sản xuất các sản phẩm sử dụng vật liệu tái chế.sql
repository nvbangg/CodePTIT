SELECT s.country 
FROM SupplyChainViolations s 
JOIN Products p ON s.country = p.country
JOIN ProductTransparency pt ON p.product_id = pt.product_id 
WHERE s.num_violations >= 1 AND pt.recycled_materials = TRUE;