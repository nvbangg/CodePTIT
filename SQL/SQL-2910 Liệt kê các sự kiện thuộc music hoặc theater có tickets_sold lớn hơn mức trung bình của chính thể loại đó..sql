SELECT 
 e1.name, 
 e1.category, 
 e1.tickets_sold
FROM 
 events e1
WHERE 
 e1.category IN ('music', 'theater')
 AND e1.tickets_sold > (
 SELECT AVG(e2.tickets_sold)
 FROM events e2
 WHERE e2.category = e1.category
 )
ORDER BY 
 e1.tickets_sold DESC;