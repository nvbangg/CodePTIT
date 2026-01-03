(SELECT u.name AS results 
FROM MovieRating m 
JOIN Users u ON u.user_id = m.user_id 
GROUP BY u.name 
ORDER BY COUNT(*) DESC, name 
LIMIT 1) 
UNION ALL 
(SELECT m.title AS results
FROM Movies m 
JOIN MovieRating r ON r.movie_id = m.movie_id
WHERE r.created_at BETWEEN '2020-02-01' AND '2020-02-29'
GROUP BY m.title
ORDER BY AVG(r.rating) DESC, m.title
LIMIT 1)