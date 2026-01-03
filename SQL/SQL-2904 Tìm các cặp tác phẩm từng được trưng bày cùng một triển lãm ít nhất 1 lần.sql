SELECT a1.Title AS Title1, a2.Title AS Title2, COUNT(*) AS co_exhibit_count 
FROM Exhibitions e1 
JOIN Exhibitions e2 ON e1.ExhibitionID = e2.ExhibitionID 
JOIN Artworks a1 ON a1.ArtworkID = e1.ArtworkID 
JOIN Artworks a2 ON a2.ArtworkID = e2.ArtworkID 
WHERE a1.ArtworkID < a2.ArtworkID 
GROUP BY a1.Title, a2.Title 
HAVING co_exhibit_count >= 1 
ORDER BY co_exhibit_count DESC, a1.Title ASC, a2.Title ASC;