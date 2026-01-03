SELECT category , COUNT(*) AS event_count 
FROM events 
WHERE tickets_sold BETWEEN 100 AND 250
GROUP BY category
ORDER BY event_count DESC, category ASC;