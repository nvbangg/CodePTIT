SELECT p.name AS provider_name, SUM( pg.power_generated) AS total_power_generated 
FROM provider p 
JOIN region r ON r.id = p.region_id 
JOIN renewable_source rs ON p.id = rs.provider_id 
JOIN power_generation pg ON pg.source_id = rs.id 
WHERE r.name LIKE '%st' AND rs.name IN ('Solar', 'Wind') AND (pg.date BETWEEN '2021-01-01' AND '2021-03-31') 
 AND pg.power_generated > 0
GROUP BY p.name
HAVING COUNT(DISTINCT rs.name) = 2
ORDER BY total_power_generated DESC, p.name DESC
LIMIT 3;