SELECT AVG(total) AS num_budget 
FROM (
 SELECT budget AS total
 FROM ai_budget_usa
 WHERE year IN (2018, 2019, 2020)
 UNION ALL 
 SELECT budget AS total
 FROM ai_budget_uk
 WHERE year IN (2018, 2019, 2020)
 UNION ALL 
 SELECT budget AS total
 FROM ai_budget_japan
 WHERE year IN (2018, 2019, 2020)
) AS t;