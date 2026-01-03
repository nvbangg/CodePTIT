SELECT i.location, SUM (i.amount) AS total_amount 
FROM esg_factors e 
JOIN impact_investments i ON e.company_id = i.company_id 
WHERE e.environment > 2.0 AND e.social > 2.0 AND e.governance > 2.0
GROUP BY i.location
HAVING total_amount >= 10000000
ORDER BY total_amount DESC;