SELECT h.name, h.num_beds AS num_beds, (IFNULL(o.beds_occupied, 0) * 100.0 / h.num_beds) AS pct_occupied 
FROM hospitals h 
JOIN occupancy o ON o.hospital_id = h.id 
WHERE h.state = 'New York'
ORDER BY pct_occupied DESC;