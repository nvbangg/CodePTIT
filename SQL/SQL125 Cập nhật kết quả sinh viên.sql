UPDATE SinhVien
SET TrangThai = CASE 
 WHEN DiemTB > 5.0 OR DiemTB = 5.0 THEN 'Đạt'
 ELSE 'Không đạt'
 END;