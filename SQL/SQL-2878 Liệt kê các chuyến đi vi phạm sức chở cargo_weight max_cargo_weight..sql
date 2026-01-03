SELECT v.name AS vessel_name, vg.id AS voyage_id, vg.cargo_weight , v.max_cargo_weight 
FROM vessels v 
JOIN voyages vg ON v.id = vg.vessel_id 
WHERE vg.cargo_weight > v.max_cargo_weight;