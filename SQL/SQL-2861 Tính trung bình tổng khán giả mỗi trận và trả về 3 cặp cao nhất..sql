SELECT CASE
        WHEN HomeTeam < AwayTeam THEN HomeTeam
        ELSE AwayTeam
    END AS TeamA,
    CASE
        WHEN HomeTeam < AwayTeam THEN AwayTeam
        ELSE HomeTeam
    END AS TeamB,
    AVG(HomeAttendance + AwayAttendance) AS Avg_Total_Attendance
FROM TeamStats
GROUP BY CASE
        WHEN HomeTeam < AwayTeam THEN HomeTeam
        ELSE AwayTeam
    END,
    CASE
        WHEN HomeTeam < AwayTeam THEN AwayTeam
        ELSE HomeTeam
    END
ORDER BY Avg_Total_Attendance DESC,
    TeamA ASC,
    TeamB ASC
LIMIT 3;