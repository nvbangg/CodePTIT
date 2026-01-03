SELECT DISTINCT l1.num AS ConsecutiveNums
FROM LOGS l1
     JOIN LOGS l2 ON l1.id = l2.id - 1
     AND l1.num = l2.num
     JOIN LOGS l3 ON l2.id = l3.id - 1
     AND l2.num = l3.num
ORDER BY l1.num;