SELECT i.initiative_name, COUNT(DISTINCT m.student_id) AS students_impacted
FROM impact m
LEFT JOIN initiatives i ON i.initiative_id = m.initiative_id
WHERE i.community_type = 'Historically_underrepresented'
GROUP BY i.initiative_name
LIMIT 5;