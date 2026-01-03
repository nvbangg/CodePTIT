SELECT h.territory, ROUND(100 * (SUM(CASE WHEN h.has_helipad = TRUE THEN 1 ELSE 0 END)) / COUNT(*), 2) AS helipad_rate 
FROM hospitals h
GROUP BY h.territory
HAVING COUNT(*) >= 1
ORDER BY helipad_rate DESC;