SELECT name, category, tickets_sold 
FROM events 
WHERE category IN ('music', 'theater')
ORDER BY tickets_sold DESC
LIMIT 3;