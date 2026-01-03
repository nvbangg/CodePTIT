SELECT r.lead_researcher
FROM research r
JOIN gene g ON r.id = g.research_id
GROUP BY r.id, r.lead_researcher
ORDER BY COUNT(g.id) DESC
LIMIT 1;