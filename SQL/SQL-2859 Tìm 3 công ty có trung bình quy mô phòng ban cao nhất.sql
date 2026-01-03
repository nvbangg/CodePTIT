WITH dept_stats AS (
 SELECT 
 d.company_id,
 d.dept_id,
 COUNT(e.employee_id) AS dept_size,
 SUM(CASE WHEN e.gender = 'Female' THEN 1 ELSE 0 END) AS female_count
 FROM departments d
 LEFT JOIN employees e ON d.dept_id = e.dept_id
 GROUP BY d.company_id, d.dept_id
),
valid_depts AS (
 SELECT *
 FROM dept_stats
 WHERE dept_size >= 2
),
company_agg AS (
 SELECT 
 c.company_id,
 c.company_name,
 AVG(v.dept_size) AS avg_dept_size,
 ROUND(SUM(v.female_count) * 100.0 / SUM(v.dept_size),2) AS female_percentage,
 COUNT(v.dept_id) AS valid_cnt
 FROM valid_depts v
 JOIN companies c ON c.company_id = v.company_id
 GROUP BY c.company_id, c.company_name
 HAVING COUNT(v.dept_id) >= 2
)
SELECT 
 company_name,
 avg_dept_size,
 female_percentage
FROM company_agg
ORDER BY 
 female_percentage DESC
LIMIT 3;