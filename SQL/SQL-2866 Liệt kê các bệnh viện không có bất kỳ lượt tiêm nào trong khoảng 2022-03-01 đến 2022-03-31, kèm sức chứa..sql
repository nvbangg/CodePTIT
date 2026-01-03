SELECT h.name, h.capacity 
FROM hospitals h 
LEFT JOIN patient_vaccinations p ON h.id = p.hospital_id 
GROUP BY h.name, h.capacity 
HAVING SUM(CASE WHEN p.date BETWEEN '2022-03-01' AND '2022-03-31' THEN 1 ELSE 0 END) = 0
ORDER BY h.name;