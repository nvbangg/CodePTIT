SELECT c.sector_name, 100.0 * SUM(CASE WHEN u.union_status = 'Union' THEN w.incidents ELSE 0 END) / SUM(w.incidents) AS union_share_pct 
FROM construction_sectors c 
JOIN workplace_safety_incidents w ON c.sector_id = w.sector_id
JOIN union_status u ON u.id = w.union_status_id 
WHERE w.incident_year IN (2021, 2022) 
GROUP BY c.sector_name
HAVING SUM(CASE WHEN u.union_status = 'Union' THEN w.incidents ELSE 0 END) > 0 
 AND SUM(CASE WHEN u.union_status = 'Non-Union' THEN w.incidents ELSE 0 END) > 0
ORDER BY union_share_pct DESC;