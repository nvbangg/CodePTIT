SELECT t.country, SUM(t.total) AS total_budget 
FROM (
 SELECT country , budget AS total 
 FROM ai_budget_usa
 WHERE year >= 2019

 UNION ALL

 SELECT country , budget AS total 
 FROM ai_budget_uk
 WHERE year >= 2019

 UNION ALL
 
 SELECT country , budget AS total 
 FROM ai_budget_japan
 WHERE year >= 2019

) AS t
GROUP BY t.country;