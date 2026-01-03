SELECT u.union_status, 
 SUM(CASE WHEN w.incident_year = 2021 THEN w.incidents ELSE 0 END) AS incidents_2021,
 SUM(CASE WHEN w.incident_year = 2022 THEN w.incidents ELSE 0 END) AS incidents_2022,
 (SUM(CASE WHEN w.incident_year = 2022 THEN w.incidents ELSE 0 END) - SUM(CASE WHEN w.incident_year = 2021 THEN w.incidents ELSE 0 END)) AS delta_2022_vs_2021 
FROM construction_sectors c
JOIN workplace_safety_incidents w ON w.sector_id = c.sector_id
JOIN union_status u ON u.id = w.union_status_id 
GROUP BY u.union_status 
ORDER BY u.union_status;