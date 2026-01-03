SELECT a.Title, COUNT(e.ExhibitionID ) AS exhibitions_count 
FROM Artworks a
JOIN Exhibitions e ON a.ArtworkID = e.ArtworkID 
GROUP BY a.Title 
HAVING exhibitions_count >= 2
ORDER BY a.Title ASC;