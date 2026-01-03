SELECT h.name, h.capacity, COUNT(p.id ) AS total_shots_mar2022 ,
 ROUND((100 * COUNT(p.patient_id ) / h.capacity),2) AS utilization_pct 
FROM hospitals h
LEFT JOIN patient_vaccinations p ON h.id = p.hospital_id AND (p.date BETWEEN '2022-03-01' AND '2022-03-31')
GROUP BY h.name, h.capacity
HAVING COUNT(p.patient_id ) >= 1
ORDER BY utilization_pct DESC;