SELECT MAX(vr.Horsepower) AS horsepower
FROM Vehicle_Releases vr
JOIN Vehicle_Types v ON vr.Vehicle_Type_Id = v.Id 
WHERE v.Name = 'Sedan' AND year(Release_Date) BETWEEN 2020 AND year(CURRENT_TIMESTAMP) 
GROUP BY v.Name;