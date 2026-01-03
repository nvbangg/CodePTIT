SELECT p.category, COUNT(DISTINCT p.product_id) AS distinct_products 
FROM products p 
JOIN sales s ON s.product_id = p.product_id 
JOIN time t ON s.time_id = t.time_id
WHERE t.sale_date BETWEEN '2025-07-01' AND '2025-09-30'
GROUP BY p.category
HAVING distinct_products >= 2
ORDER BY distinct_products DESC;