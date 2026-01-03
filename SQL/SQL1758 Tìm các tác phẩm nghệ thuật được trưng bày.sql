SELECT DISTINCT a2.Title 
FROM Artworks a1
JOIN Exhibitions e1 ON e1.ArtworkID = a1.ArtworkID
JOIN Exhibitions e2 ON e1.ExhibitionID = e2.ExhibitionID 
JOIN Artworks a2 ON a2.ArtworkID = e2.ArtworkID 
WHERE a1.Title = 'Sunflowers'
 AND a2.Title <> 'Sunflowers';