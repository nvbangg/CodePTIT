SELECT HomeTeam, AVG(HomeAttendance) AS Avg_Home_Attendance 
FROM TeamStats 
GROUP BY HomeTeam 
ORDER BY Avg_Home_Attendance DESC, HomeTeam ASC 
LIMIT 3;