SELECT material, AVG(recycling_rate) AS avg_rate 
FROM recycling_rates 
WHERE year IN (2018, 2019)
GROUP BY material 
ORDER BY avg_rate DESC 
LIMIT 1;