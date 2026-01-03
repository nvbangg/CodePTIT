SELECT i.project, i.location, i.amount, e.environment, e.social, e.governance 
FROM impact_investments i 
JOIN esg_factors e ON i.company_id = e.company_id 
WHERE i.sector = 'Renewable Energy'
 AND(e.environment + e.social + e.governance) > 7.5;