SELECT r.company_id, COUNT(DISTINCT g.id) AS distinct_gene_count 
FROM research r 
JOIN gene g ON r.id = g.research_id 
WHERE r.start_date > '2024-01-01'
GROUP BY r.company_id 
ORDER BY distinct_gene_count DESC, r.company_id ASC
LIMIT 1;