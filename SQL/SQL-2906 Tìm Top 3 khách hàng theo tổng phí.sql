SELECT t.name, SUM(t.total) AS total_fee 
FROM (
 SELECT name, subscription_fee AS total
 FROM mobile_subscribers 
 WHERE date BETWEEN '2025-01-01' AND '2025-03-31' 

 UNION ALL 
 
 SELECT name, subscription_fee AS total
 FROM broadband_subscribers 
 WHERE date BETWEEN '2025-01-01' AND '2025-03-31' 
) AS t
GROUP BY t.name 
ORDER BY total_fee DESC
LIMIT 3;