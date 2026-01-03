SELECT t.name AS type_name, r.name AS model_name, MAX(r.Release_Date) AS release_date 
FROM Vehicle_Types t
JOIN Vehicle_Releases r ON t.id = r.Vehicle_Type_Id 
JOIN (
 SELECT Vehicle_Type_Id, MAX(Release_Date) AS maxDate
 FROM Vehicle_Releases
 GROUP BY Vehicle_Type_Id
) AS m ON m.maxDate = r.Release_Date AND m.Vehicle_Type_Id = r.Vehicle_Type_Id
GROUP BY t.name, r.name
ORDER BY t.name, r.name;