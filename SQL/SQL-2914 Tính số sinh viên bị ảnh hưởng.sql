SELECT i.community_type, COUNT(DISTINCT ip.student_id) AS students_impacted 
FROM initiatives i 
JOIN impact ip ON i.initiative_id = ip.initiative_id 
WHERE i.initiative_date BETWEEN '2025-01-01' AND '2025-03-31'
GROUP BY i.community_type 
ORDER BY COUNT(DISTINCT ip.student_id) DESC;