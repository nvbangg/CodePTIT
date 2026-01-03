SELECT service_type, SUM(t.total) AS total_revenue 
FROM (
 SELECT 'mobile' AS service_type, subscription_fee AS total
 FROM mobile_subscribers 
 WHERE date BETWEEN '2025-03-01' AND '2025-03-31' 

 UNION ALL 
 
 SELECT 'broadband' AS service_type, subscription_fee AS total
 FROM broadband_subscribers 
 WHERE date BETWEEN '2025-03-01' AND '2025-03-31' 
) AS t
GROUP BY service_type 
ORDER BY total_revenue DESC;