SELECT u.union_status, w.incident_year, SUM(w.incidents) AS total_incidents
FROM workplace_safety_incidents w
JOIN union_status u ON u.id = w.union_status_id
JOIN construction_sectors c ON c.sector_id = w.sector_id
WHERE w.incident_year IN (2021, 2022)
GROUP BY u.union_status, w.incident_year
ORDER BY u.union_status ASC, w.incident_year ASC;