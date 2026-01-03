select a.company_name,count(distinct b.dept_id) as dept_count 
from companies a
join departments b on a.company_id=b.company_id 
join employees c on b.dept_id=c.dept_id
group by a.company_name;