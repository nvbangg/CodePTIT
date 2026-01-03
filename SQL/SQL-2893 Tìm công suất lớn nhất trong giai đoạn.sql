SELECT t.Name AS type_name, MAX(Horsepower) AS max_hp 
FROM Vehicle_Types t 
JOIN Vehicle_Releases r ON t.id = r.Vehicle_Type_Id 
WHERE r.Release_Date BETWEEN '2021-01-01' AND '2022-12-31'
GROUP BY t.Name 
ORDER BY max_hp DESC;