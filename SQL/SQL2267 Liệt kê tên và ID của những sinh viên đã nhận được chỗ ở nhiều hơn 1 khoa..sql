SELECT si.*
FROM student_info si 
JOIN (
 SELECT student_id 
 FROM student_disability_accommodations 
 GROUP BY student_id 
 HAVING COUNT(department) > 1
) t ON t.student_id = si.student_id;