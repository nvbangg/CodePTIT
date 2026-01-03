SELECT i.project, i.location, i.amount, (e.environment + e.social + e.governance) / 3.0 AS avg_esg 
FROM esg_factors e 
JOIN impact_investments i ON e.company_id = i.company_id 
WHERE i.sector = 'Renewable Energy' AND i.amount >= 5000000 AND (e.environment + e.social + e.governance) / 3.0 >= 2.7
ORDER BY i.amount DESC;