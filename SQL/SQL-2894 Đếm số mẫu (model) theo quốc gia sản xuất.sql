SELECT r.Origin_Country AS origin_country , COUNT(*) AS model_count
FROM Vehicle_Types t 
JOIN Vehicle_Releases r ON t.id = r.Vehicle_Type_Id 
WHERE (r.Horsepower BETWEEN 150 AND 350) AND (r.Release_Date > '2018-12-31')
GROUP BY r.Origin_Country 
ORDER BY model_count DESC;