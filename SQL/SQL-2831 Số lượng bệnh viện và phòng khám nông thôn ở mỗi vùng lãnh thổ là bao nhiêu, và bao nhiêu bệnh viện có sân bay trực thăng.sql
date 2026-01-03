SELECT h.territory, COUNT(DISTINCT h.id) AS num_hospitals, 
 COUNT(DISTINCT c.id) AS num_clinics, 
 SUM(CASE WHEN h.has_helipad = true THEN 1 ELSE 0 END) AS num_hospitals_with_helipad 
FROM hospitals h 
LEFT JOIN clinics c ON h.territory = c. territory
GROUP BY h.territory;