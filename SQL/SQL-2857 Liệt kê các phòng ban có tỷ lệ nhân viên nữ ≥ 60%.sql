SELECT c.company_name, d.dept_name, 100.0 * (COUNT(CASE WHEN e.gender = 'Female' THEN e.employee_id END)) / COUNt(e.employee_id) AS female_percentage 
FROM companies c 
JOIN departments d ON d.company_id = c.company_id
JOIN employees e ON e.dept_id = d.dept_id 
GROUP BY c.company_name, d.dept_name
HAVING female_percentage >= 60
ORDER BY female_percentage DESC, d.dept_name ;