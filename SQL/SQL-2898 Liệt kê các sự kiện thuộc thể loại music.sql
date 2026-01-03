SELECT name, tickets_sold
FROM events 
WHERE category = 'music' AND tickets_sold > (
 SELECT AVG(tickets_sold) 
 FROM events 
 WHERE category IN ('music')
)
ORDER BY tickets_sold DESC;