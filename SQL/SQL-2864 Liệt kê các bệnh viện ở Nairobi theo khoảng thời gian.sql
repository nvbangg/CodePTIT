SELECT 
 h.name,
 COUNT(DISTINCT CASE WHEN p.date BETWEEN '2022-03-01' AND '2022-03-31' THEN p.patient_id END) AS unique_patients,
 SUM(CASE WHEN p.date BETWEEN '2022-03-01' AND '2022-03-31' THEN 1 ELSE 0 END) AS total_shots
FROM hospitals h
LEFT JOIN patient_vaccinations p
 ON h.id = p.hospital_id
WHERE h.location = 'Nairobi'
GROUP BY h.name
ORDER BY unique_patients DESC, total_shots DESC;