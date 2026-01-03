SELECT v.name, SUM(vg.cargo_weight) AS total_cargo_arctic 
FROM vessels v 
JOIN voyages vg ON v.id = vg.vessel_id 
WHERE vg.region = 'Arctic'
GROUP BY v.name 
HAVING total_cargo_arctic > 10000
ORDER BY total_cargo_arctic DESC;