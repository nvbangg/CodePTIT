SELECT i.project, i.sector, ROUND(i.amount * 1.0 / (e.environment + e.social + e.governance), 2) AS amount_per_esg 
FROM esg_factors e 
JOIN impact_investments i ON e.company_id = i.company_id 
WHERE (e.environment + e.social + e.governance) > 0 AND (i.amount * 1.0 / (e.environment + e.social + e.governance)) >= 2000000
ORDER BY amount_per_esg DESC;