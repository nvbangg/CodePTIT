SELECT i.company_id, SUM(i.amount) AS total_amount_energy,
 (e.environment + e.social + e.governance) AS total_esg 
FROM impact_investments i
JOIN esg_factors e ON e.company_id = i.company_id
WHERE i.sector LIKE '%Energy%' 
GROUP BY i.company_id, e.environment, e.social, e.governance
HAVING total_amount_energy > 10000000 AND total_esg > 7.5
ORDER BY total_amount_energy DESC;