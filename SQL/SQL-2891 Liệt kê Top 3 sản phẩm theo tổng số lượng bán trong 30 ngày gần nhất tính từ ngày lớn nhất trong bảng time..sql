SELECT p.product_name, SUM(s.quantity) AS total_qty 
FROM Products p 
JOIN sales s ON s.product_id = p.product_id 
JOIN time t ON t.time_id = s.time_id 
WHERE t.sale_date >= (
 SELECT DATE_SUB(MAX(sale_date), INTERVAL 30 DAY) 
 FROM time 
)
GROUP BY p.product_name 
ORDER BY total_qty DESC 
LIMIT 3;