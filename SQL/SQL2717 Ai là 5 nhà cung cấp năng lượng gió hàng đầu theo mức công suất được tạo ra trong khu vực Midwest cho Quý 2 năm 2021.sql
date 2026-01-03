SELECT p.name AS provider_name, SUM(pg.power_generated) AS total_power_generated
FROM Provider p 
JOIN region r ON r.id = p.region_id 
JOIN renewable_source rs ON rs.provider_id = p.id 
JOIN power_generation pg ON pg.source_id = rs.id 
WHERE r.name = 'Midwest' AND (pg.date BETWEEN '2021-04-01' AND '2021-06-30') AND rs.name = 'Wind'
GROUP BY p.name
ORDER BY total_power_generated DESC
LIMIT 3;