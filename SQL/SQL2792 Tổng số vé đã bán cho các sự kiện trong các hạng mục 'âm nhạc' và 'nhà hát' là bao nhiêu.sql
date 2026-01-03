SELECT SUM(tickets_sold) AS num_tickets_sold 
FROM events 
WHERE category = 'music' OR category = 'theater';