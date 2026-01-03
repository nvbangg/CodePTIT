SELECT v.type, SUM(vg.distance) AS total_distance_atlantic 
FROM vessels v 
JOIN voyages vg ON v.id = vg.vessel_id 
WHERE vg.region = 'Atlantic'
GROUP BY vg.region, v.type
HAVING total_distance_atlantic >= 1000
ORDER BY total_distance_atlantic DESC;