SELECT r1.material 
FROM recycling_rates r1 
JOIN recycling_rates r2 ON r1.material = r2.material 
JOIN recycling_rates r3 ON r2.material = r3.material 
WHERE (r1.year = 2017 AND r2.year = 2018 AND r3.year = 2019)
 AND (r3.recycling_rate > r2. recycling_rate AND r2.recycling_rate > r1.recycling_rate );