SELECT v.name 
FROM vessels v 
JOIN voyages va ON v.id = va.vessel_id 
WHERE va.region = 'Arctic' AND va.cargo_weight > 5000;