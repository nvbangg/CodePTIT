SELECT l.TenLoaiHang , n.TenCongTy, n.DiaChi
FROM NHACUNGCAP n 
JOIN MATHANG m ON m.MaCongTy = n.MaCongTy
JOIN LOAIHANG l ON l.MaLoaiHang = m.MaLoaiHang 
WHERE l.TenLoaiHang = 'furniture';