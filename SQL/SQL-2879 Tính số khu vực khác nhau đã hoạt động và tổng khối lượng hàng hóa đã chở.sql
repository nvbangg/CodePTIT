SELECT v.name, COUNT(DISTINCT vg.region) AS distinct_regions , SUM(vg.cargo_weight) AS total_cargo 
FROM vessels v 
JOIN voyages vg ON v.id = vg.vessel_id 
GROUP BY v.name
HAVING distinct_regions >= 2 AND total_cargo > 0
ORDER BY distinct_regions DESC, total_cargo DESC, name ASC;