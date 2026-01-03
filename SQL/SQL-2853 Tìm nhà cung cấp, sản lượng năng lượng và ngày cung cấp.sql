SELECT p.name AS provider_name, COUNT(DISTINCT pg.date) AS days_active, SUM( pg.power_generated) AS total_power_generated 
FROM provider p 
JOIN region r ON r.id = p.region_id 
JOIN renewable_source rs ON p.id = rs.provider_id 
JOIN power_generation pg ON pg.source_id = rs.id 
WHERE LOWER(r.name) LIKE '%east%' AND rs.name = 'Solar' AND (pg.date BETWEEN '2021-02-01' AND '2021-05-31') 
GROUP BY p.name
ORDER BY days_active DESC, total_power_generated DESC
LIMIT 2;