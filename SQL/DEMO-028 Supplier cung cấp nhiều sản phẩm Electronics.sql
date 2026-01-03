SELECT sr.SID, sr.SName 
FROM Supplier sr 
JOIN Supply sp ON sp.SID = sr.SID 
JOIN Product p ON p.PID = sp.PID 
JOIN Category c ON c.CatID = p.CatID
WHERE c.CatName = 'Electronics'
GROUP BY sp.SID
HAVING COUNT(*) >= 2;