SELECT c.sector_name, u.union_status, 
 AVG(IFNULL(w.incidents, 0)) AS avg_incidents_2021_2022 
FROM construction_sectors c
JOIN workplace_safety_incidents w ON w.sector_id = c.sector_id
JOIN union_status u ON u.id = w.union_status_id 
WHERE w.incident_year IN(2021, 2022)
GROUP BY c.sector_name, u.union_status 
ORDER BY avg_incidents_2021_2022 DESC
LIMIT 3;