SELECT name, peak_date, peak_shots
FROM (
 SELECT 
 h.name, 
 p.date AS peak_date, 
 COUNT(p.patient_id) AS peak_shots,
 ROW_NUMBER() OVER (PARTITION BY h.name ORDER BY COUNT(p.patient_id) DESC) as rn
 FROM hospitals h 
 JOIN patient_vaccinations p ON h.id = p.hospital_id 
 GROUP BY h.name, p.date 
) t
WHERE rn = 1 
ORDER BY peak_shots DESC 
LIMIT 3;