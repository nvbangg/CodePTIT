SELECT i.initiative_name, COUNT(DISTINCT ip.student_id) AS students_impacted 
FROM initiatives i 
JOIN impact ip ON i.initiative_id = ip.initiative_id 
WHERE year(initiative_date ) = 2024
GROUP BY i.initiative_name 
HAVING COUNT(ip.student_id) >= 2
ORDER BY COUNT(ip.student_id) DESC;