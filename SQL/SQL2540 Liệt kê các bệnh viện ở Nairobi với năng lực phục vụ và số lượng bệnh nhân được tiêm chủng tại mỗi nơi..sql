SELECT h.name, h.capacity, COUNT(p.patient_id) AS vaccinated 
FROM hospitals h 
JOIN patient_vaccinations p ON h.id = p.hospital_id 
WHERE h.location = 'Nairobi'
GROUP BY h.name, h.capacity, p.patient_id;