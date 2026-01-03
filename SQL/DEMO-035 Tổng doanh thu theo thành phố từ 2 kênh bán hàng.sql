SELECT City, SUM(Amount) AS TotalRevenue 
FROM (SELECT City, Amount FROM OnlineOrder UNION ALL SELECT City, Amount FROM StoreOrder) AS t
GROUP BY City
ORDER BY City;