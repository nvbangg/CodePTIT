SELECT p.product_name, SUM(s.quantity) AS total_qty 
FROM products p 
JOIN sales s ON s.product_id = p.product_id 
JOIN time t ON s.time_id = t.time_id
WHERE YEAR(t.sale_date) = 2025 AND p.category = 'Hair Care'
GROUP BY p.product_name
ORDER BY total_qty DESC;