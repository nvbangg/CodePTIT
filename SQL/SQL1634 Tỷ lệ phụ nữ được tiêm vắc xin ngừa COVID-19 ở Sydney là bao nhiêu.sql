SELECT ROUND(100.0 * SUM(CASE WHEN Gender = 'Female' THEN 1 ELSE 0 END) / COUNT(*), 2) AS 'Female_Percentage_Sydney(%)'
FROM Vaccinations
WHERE City = 'Sydney';