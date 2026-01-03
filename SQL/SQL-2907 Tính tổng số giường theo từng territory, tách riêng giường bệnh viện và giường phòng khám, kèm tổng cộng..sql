SELECT 
 t.territory,
 SUM(CASE WHEN t.type = 'hospital' THEN t.num_beds ELSE 0 END) AS total_hospital_beds,
 SUM(CASE WHEN t.type = 'clinic' THEN t.num_beds ELSE 0 END) AS total_clinic_beds,
 SUM(t.num_beds) AS total_beds
FROM (
 SELECT territory, num_beds, 'hospital' AS type 
 FROM hospitals
 
 UNION ALL
 
 SELECT territory, num_beds, 'clinic' AS type 
 FROM clinics
) AS t
GROUP BY 
 t.territory
ORDER BY 
 total_beds DESC;