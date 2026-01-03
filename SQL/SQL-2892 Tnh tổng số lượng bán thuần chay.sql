SELECT p.vegan, SUM(s.quantity) AS total_qty 
FROM Products p
JOIN sales s ON s.product_id = p.product_id 
JOIN time t ON t.time_id = s.time_id 
WHERE t.sale_date BETWEEN '2025-01-01' AND '2025-06-30' 
 AND p.category IN ('Hair Care', 'Body Care') 
GROUP BY p.vegan
ORDER BY total_qty DESC;