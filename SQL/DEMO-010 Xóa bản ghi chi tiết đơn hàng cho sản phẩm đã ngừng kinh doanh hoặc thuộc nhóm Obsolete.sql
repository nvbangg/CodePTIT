DELETE o
FROM ORDER_ITEM o
JOIN PRODUCT p ON p.ProductID = o.ProductID 
JOIN CATEGORY c ON c.CategoryID = p.CategoryID 
WHERE p.Discontinued = 1 OR c.CategoryName = 'Obsolete';