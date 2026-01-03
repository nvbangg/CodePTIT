SELECT SUM(total) AS num_revenue
FROM(
 SELECT subscription_fee AS total 
 FROM mobile_subscribers 
 WHERE date BETWEEN '2025-03-01' AND '2025-03-31'
 UNION ALL 

 SELECT subscription_fee AS total 
 FROM broadband_subscribers
 WHERE date BETWEEN '2025-03-01' AND '2025-03-31'
) AS t;