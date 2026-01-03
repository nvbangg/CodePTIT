SELECT category, SUM(tickets_sold) AS total_tickets 
FROM events 
WHERE category IN ('music', 'theater') 
GROUP BY category 
HAVING total_tickets > 300
ORDER BY total_tickets DESC;