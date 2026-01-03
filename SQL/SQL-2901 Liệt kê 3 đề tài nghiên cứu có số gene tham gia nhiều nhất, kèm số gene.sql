SELECT r.title, COUNT(*) AS gene_count 
FROM research r 
JOIN gene g ON r.id = g.research_id 
GROUP BY r.title 
ORDER BY gene_count DESC 
LIMIT 3;