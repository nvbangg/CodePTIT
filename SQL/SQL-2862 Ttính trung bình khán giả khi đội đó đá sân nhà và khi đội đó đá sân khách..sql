SELECT t.Team AS Team, AVG(t.Home_Att) AS Avg_As_Home, AVG(t.Away_Att) AS Avg_As_Away
FROM (
 SELECT HomeTeam AS Team, HomeAttendance AS Home_Att, NULL AS Away_Att
 FROM TeamStats 

 UNION 

 SELECT AwayTeam AS Team, NULL AS Home_Att, AwayAttendance AS Away_Att
 FROM TeamStats
) AS t
GROUP BY Team
ORDER BY Team;