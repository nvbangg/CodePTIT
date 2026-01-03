SELECT t.name AS type_name, AVG(r.Horsepower) AS avg_hp
FROM Vehicle_Types t 
JOIN Vehicle_Releases r ON t.Id = r.Vehicle_Type_Id 
WHERE t.name IN ('SUV', 'Truck') AND r.Release_Date > '2020-01-01' AND r.Origin_Country IN ('USA', 'Germany')
GROUP BY t.name 
ORDER BY avg_hp DESC;