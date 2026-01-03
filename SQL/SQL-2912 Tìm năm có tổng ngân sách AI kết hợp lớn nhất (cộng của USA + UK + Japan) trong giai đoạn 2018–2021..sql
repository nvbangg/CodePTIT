SELECT t.year, SUM(t.total) AS total_budget 
FROM (
 SELECT year , budget AS total 
 FROM ai_budget_usa
 WHERE year IN(2018, 2019, 2020, 2021)

 UNION ALL

 SELECT year , budget AS total 
 FROM ai_budget_uk
 WHERE year IN(2018, 2019, 2020, 2021)

 UNION ALL
 
 SELECT year , budget AS total 
 FROM ai_budget_japan
 WHERE year IN(2018, 2019, 2020, 2021)

) AS t
GROUP BY t.year
ORDER BY total_budget DESC 
LIMIT 1;