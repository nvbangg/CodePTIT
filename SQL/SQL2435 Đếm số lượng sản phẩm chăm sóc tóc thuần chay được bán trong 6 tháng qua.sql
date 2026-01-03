select count(p.product_name) as num_products from products p
join sales s on s.product_id = p.product_id
join time t on t.time_id = s.time_id
where 
 p.category = 'Hair Care' 
 and p.vegan = TRUE
 and t.sale_date >= DATE_SUB('2025-11-01', interval 6 month);