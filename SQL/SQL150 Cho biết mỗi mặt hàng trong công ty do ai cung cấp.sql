SELECT mh.TenHang AS TenHang,
    ncc.MaCongTy AS MaCongTy,
    ncc.TenCongTy AS TenCongTy
FROM MATHANG mh
    JOIN NHACUNGCAP ncc ON mh.MaCongTy = ncc.MaCongTy
ORDER BY mh.TenHang