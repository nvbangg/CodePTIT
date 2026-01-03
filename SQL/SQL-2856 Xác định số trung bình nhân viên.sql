SELECT c.company_name, ROUND(COUNT(e.employee_id) * 1.0 / COUNT(DISTINCT d.dept_id), 2) AS avg_employees_per_department 
FROM companies c 
JOIN departments d ON d.company_id = c.company_id
JOIN employees e ON e.dept_id = d.dept_id 
GROUP BY c.company_name
ORDER BY avg_employees_per_department DESC 
LIMIT 3;