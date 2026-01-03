SELECT c.sector_name, u.union_status, 
 SUM(CASE WHEN w.incident_year IN(2021, 2022) THEN w.incidents ELSE 0 END) AS total_incidents 
FROM construction_sectors c
JOIN workplace_safety_incidents w ON w.sector_id = c.sector_id
JOIN union_status u ON u.id = w.union_status_id 
GROUP BY c.sector_name, u.union_status 
ORDER BY c.sector_name, u.union_status;