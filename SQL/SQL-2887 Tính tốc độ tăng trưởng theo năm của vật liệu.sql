SELECT (MAX(CASE WHEN year = 2018 THEN recycling_rate END) - MAX(CASE WHEN year = 2017 THEN recycling_rate END)) / MAX(CASE WHEN year = 2017 THEN recycling_rate END) AS yoy_growth 
FROM recycling_rates 
WHERE material = 'glass'
GROUP BY material;