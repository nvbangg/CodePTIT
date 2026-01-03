SELECT p.MAPHG,
    p.TENPHG
FROM PHONGBAN p
    JOIN NHANVIEN n ON p.MAPHG = n.PHG
GROUP BY p.MAPHG,
    p.TENPHG
HAVING AVG(n.LUONG) = (
        SELECT MAX(tb.avg_luong)
        FROM (
                SELECT AVG(LUONG) AS avg_luong
                FROM NHANVIEN
                GROUP BY PHG
            ) tb
    );