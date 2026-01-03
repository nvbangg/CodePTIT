SELECT t.Team AS Team, SUM(t.total) Total_Attendance 
FROM (
 SELECT HomeTeam AS Team, HomeAttendance AS total
 FROM TeamStats 

 UNION ALL

 SELECT AwayTeam AS Team, AwayAttendance AS total
 FROM TeamStats
) AS t
GROUP BY t.Team
ORDER BY Total_Attendance DESC, Team ASC;