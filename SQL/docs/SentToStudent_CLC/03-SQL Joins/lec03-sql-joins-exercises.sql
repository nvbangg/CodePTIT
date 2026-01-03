--EXERCISE 1. Cho CSDL về phim như bên dưới

--- Movies(title, year, length, genre, studioName, producerC#): Bảng Movie chứa thông tin về các bộ phim
--- Starsln(movieTitle, movieYear, starName): Bảng StarsIn cho biết diễn viên đóng phim nào
--- MovieStar(name, address, gender, birthdate): Bảng MovieStar chứa thông tin về diễn viên
--- MovieExec(name, address, cert#, netWorth): Bảng MoviewExec chứa thông tin về đạo diễn
--- Studio(name, address, presC#): Bảng Studio chứa thông tin về hãng phim

--- Viết các câu truy vấn sau:

--- a) Ai là diễn viên nữ chính đã đóng phim Titanic?


--- b) Những diễn viên nào xuất hiện phòng các bộ phim sản xuất bởi MGM năm 1995?


--- c) Ai là chủ tịch của hãng phim MGM?


--- ! d) Những bộ phim nào dài hơn phim Gone With the Wind?


--- ! e) Những đạo diễn nào thu nhập cao hơn Griffin?



--EXERCISE 2. Cho CSDL về thiết bị công nghệ như bên dưới. Dữ liệu mẫu trong các file .csv tương ứng.

--- Product(maker,model, type): Bảng Product chứa thông tin về các sản phẩm
--- PC(model, speed, ram, hd, price): Bảng PC chứa thông tin về máy tính PC
--- Laptop(model, speed, ram, hd, screen, price): Bảng Laptop chứa thông tin về máy tính xách tay
--- Printer(model, color, type, price): Bảng Printer chứa thông tin về máy in

--- Viết các câu truy vấn sau:

--- a) Tìm nhà sản xuất và tốc độ của các laptop có ổ cứng ít nhất 30 GB.


--- b) Tìm model và giá của tất cả các sản phẩm (các loại) được làm bởi nhà sản xuất B.


--- c) Tìm những nhà sản xuất có bán Laptop nhưng không bán PC.


--- ! d) Tìm những kích thước ổ cứng xuất hiện ở 2 hoặc nhiều mẫu PC khác nhau.


--- ! e) Tìm những cặp mẫu PC có cùng tốc độ và RAM. Mỗi cặp chỉ được liệt kê 1 lần. VD liệt kê cặp (i, j) thì thôi không liệt kê (j, i)

--- !! f) Tìm những nhà sản xuất có ít nhất 2 mẫu máy tính khác nhau (PC hoặc Laptop) với tốc độ ít nhất à 3.0.