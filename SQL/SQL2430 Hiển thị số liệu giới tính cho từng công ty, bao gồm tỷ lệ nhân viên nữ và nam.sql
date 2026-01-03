SELECT c.company_name, 100 * AVG(CASE WHEN e.gender = 'Female' THEN 1 ELSE 0 END) AS female_percentage, 100 * AVG(CASE WHEN e.gender = 'Male' THEN 1 ELSE 0 END) AS male_percentage
FROM companies c 
JOIN departments d ON d.company_id = c.company_id
JOIN employees e ON e.dept_id = d.dept_id
GROUP BY c.company_id, c.company_name;