SELECT d.gender, COUNT(*) AS total_donations 
FROM Donors d 
JOIN Donations dn ON d.id = dn.donor_id 
GROUP BY d.gender;