SELECT DISTINCT HomeTeam, AVG(HomeAttendance) AS Avg_Home_Attendance, AwayTeam, AVG(AwayAttendance) AS Avg_Away_Attendance
FROM TeamStats
GROUP BY HomeTeam , AwayTeam ;