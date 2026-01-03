# Đề Toán Rời Rạc 2 CodePTIT

## Source: https://github.com/nvbangg/CodePTIT

## CT001 - Chu trình Euler 01

(Tệp chương trình: CT.CPP; Thời gian chạy chương trình ≤ 1 giây)

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh. Yêu cầu:

- (1) Kiểm tra G có phải là đồ thị Euler, nửa Euler hay không?
- (2) Tìm một chu trình Euler bắt đầu tại đỉnh u của G là đồ thị Euler.

**Dữ liệu**: Vào từ tệp CT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.
- Nếu t = 1 thì dòng thứ 2 chứa hai số nguyên dương n là số đỉnh và m là số cạnh của G, với n ≤ 100, m ≤ n(n-1)/2. Nếu t = 2 thì dòng thứ 2 chứa ba số nguyên dương n, m và u, trong đó n là số đỉnh, m là số cạnh và u là một đỉnh của G, với 1 ≤ u ≤ n ≤ 100, m ≤ n(n-1)/2.
- Trong m dòng tiếp theo, mỗi dòng thứi (1 ≤ i ≤m) chứa chứa hai số nguyên u[i],v[i] là đỉnh đầu và đỉnh cuối của cạnh e[i], với 1 ≤ u[i] < v[i] ≤ n. Trong trường hợp t = 2 thì G là đồ thị Euler.

**Kết quả**: Ghi ra tệp CT.OUT:

- Nếu t = 1 thì ghi ra giá trị 1 nếu G là Euler, giá trị 2 nếu G là nửa Euler và giá trị 0 nếu G không phải là Euler và nửa Euler.
- Nếu t = 2 thì ghi ra trên một dòng gồm dãy các đỉnh mô tả chu trình Euler bắt đầu tại đỉnh u.

Ví dụ:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th>CT.in</th><th>CT.out</th><th>Giải thích</th></tr><tr><td>1<br>4 4<br>1 2<br>1 4<br>2 4<br>3 4<br></td><td>2</td><td>G là đồ thị nửa Euler</td></tr><tr><td>2<br>4 4 2<br>1 2<br>1 4<br>2 3<br>3 4<br></td><td>2 1 4 3 2<br></td><td>Chu trình Euler bắt đầu tại<br>đỉnh u = 2&nbsp; đi qua các cạnh<br>theo thứ tự (2,1), (1,4), (4,3) và (3,2).<br></td></tr></tbody></table>

Giới hạn thời gian: 2s
Giới hạn bộ nhớ: 65536 Kb

---

## CT002 - Chu trình Euler 02

(Tệp chương trình: CT.CPP; Thời gian chạy chương trình ≤ 1 giây)

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

**Yêu cầu:**

(1) Kiểm tra G có phải là đồ thị Euler, nửa Euler hay không?

(2) Tìm một chu trình Euler bắt đầu tại đỉnh u của G là đồ thị Euler.

**Dữ liệu**: Vào từ tệp CT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.
- Nếu t = 1 thì dòng thứ hai chứa số nguyên dương n là số đỉnh của G, n  100. Nếu t = 2 thì dòng thứ 2 chứa hai số nguyên dương n và u, trong đó n là số đỉnh và u là một đỉnh của G, 1 ≤ u ≤ n ≤ 100.
- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G. Trong trường hợp t = 2 thì G là đồ thị Euler.

**Kết quả**: Ghi ra tệp CT.OUT:

- Nếu t = 1 thì ghi ra giá trị 1 nếu G là Euler, giá trị 2 nếu G là nửa Euler và giá trị 0 nếu G không phải là Euler và nửa Euler.
- Nếu t = 2 thì ghi ra trên một dòng gồm dãy các đỉnh mô tả chu trình Euler bắt đầu tại đỉnh u.

Ví dụ:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>CT.in</strong></th><th><strong>CT.out</strong></th><th><strong>Giải thích</strong></th></tr><tr><td>1<br>4<br>0 1 0 1<br>1 0 0 1<br>0 0 0 1<br>1 1 1 0<br></td><td>2</td><td>G là đồ thị nửa Euler</td></tr><tr><td>2<br>4 2<br>0 1 0 1<br>1 0 1 0<br>0 1&nbsp;0&nbsp;1<br>1 0 1 0<br></td><td>2 1 4 3 2<br></td><td>Chu trình Euler bắt đầu tại<br>đỉnh u = 2 đi qua các cạnh<br>theo thứ tự (2,1), (1,4), (4,3) và (3,2).<br></td></tr></tbody></table>

Giới hạn thời gian: 2s
Giới hạn bộ nhớ: 65536 Kb

---

## CT003 - Chu trình Euler 03

(Tệp chương trình: CT.CPP; Thời gian chạy chương trình ≤ 1 giây)

Cho trước đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách kề.  
**Yêu cầu:**  
(1) Kiểm tra G có phải là đồ thị Euler, nửa Euler hay không?

(2) Tìm một chu trình Euler bắt đầu tại đỉnh u của G là đồ thị Euler.  
**Dữ liệu**: Vào từ tệp CT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.
- Nếu t = 1 thì dòng thứ hai chứa số nguyên dương n là số đỉnh của G, n ≤ 100. Nếu t = 2 thì dòng thứ 2 chứa hai số nguyên dương n và u, trong đó n là số đỉnh và u là một đỉnh của G, 1 ≤ u ≤ n ≤ 100.
- Trong n dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ n) chứa số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v[1], ..., v[k] là số hiệu các đỉnh kề tương ứng. Trong trường hợp t = 2 thì G là đồ thị Euler.

**Kết quả**: Ghi ra tệp CT.OUT:

- Nếu t = 1 thì ghi ra giá trị 1 nếu G là Euler, giá trị 2 nếu G là nửa Euler và giá trị 0 nếu G không phải là Euler và nửa Euler.
- Nếu t = 2 thì ghi ra trên một dòng gồm dãy các đỉnh mô tả chu trình Euler bắt đầu tại đỉnh u.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th>CT.in</th><th>CT.out</th><th>Giải thích</th></tr><tr><td>1<br>4<br>2 2 4<br>1 4<br>1 1<br>1 3<br></td><td>2</td><td>G là đồ thị nửa Euler</td></tr><tr><td>2<br>4 3<br>1 2<br>1 3<br>1 4<br>1 1<br></td><td>3 4 1 2 3<br></td><td>Chu trình Euler bắt đầu tại<br>đỉnh u = 3 đi qua các cạnh<br>theo thứ tự (3,4), (4,1), (1,2) và (2,3).<br></td></tr></tbody></table>

Giới hạn thời gian: 2s
Giới hạn bộ nhớ: 65536 Kb

---

## CT004 - Chu trình Hamilton 01

(Tệp chương trình: CT.CPP; Thời gian chạy chương trình ≤ 1 giây)

Cho trước đồ thị G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề và một đỉnh u.

**Yêu cầu**: Tìm tất cả các chu trình Hamilton của G bắt đầu tại u.

**Dữ liệu**: Vào từ tệp CT.INP:

- Dòng đầu chứa hai số nguyên dương n là số đỉnh và u là một đỉnh của G, 1 ≤ u ≤ n ≤ 100.
- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

**Kết quả**: Ghi ra tệp CT.OUT:

- Dòng đầu ghi giá trị t là số lượng các chu trình Hamilton tìm được.
- Trong trường hợp t > 0, tiếp theo ghi ra t dòng, mỗi dòng ghi dãy các đỉnh của một chu trình Hamilton.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th>CT.in</th><th>CT.out</th><th>Giải thích</th></tr><tr><td>4 1<br>0 1&nbsp;0&nbsp;0<br>0 0 1 0<br>0 0 0 1<br>1 0 0 0<br></td><td>1<br>1 2 3 4 1<br></td><td>Chu trình Hamilton bắt đầu tại<br>đỉnh u = 1 đi qua các cạnh theo<br>thứ tự (1,2), (2,3), (3,4) và (4,1).<br></td></tr><tr><td>4 1<br>0 1 0 0<br>1 0 1 0<br>0 1 0 1<br>0 0 1 0<br></td><td>0</td><td>Đồ thị không chứa chu trình<br>Hamilton bắt đầu tại đỉnh u = 1.<br></td></tr></tbody></table>

Giới hạn thời gian: 2s
Giới hạn bộ nhớ: 65536 Kb

---

## CT005 - Chu trình Hamilton 02

(Tệp chương trình: CT.CPP; Thời gian chạy chương trình ≤ 1 giây)

Cho trước đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh và một đỉnh u.

**Yêu cầu**: Tìm tất cả các chu trình Hamilton của G bắt đầu tại u.

**Dữ liệu**: Vào từ tệp CT.INP:

- Dòng đầu chứa ba số nguyên dương n, m và u, trong đó n là số đỉnh, m là số cạnh và u là một đỉnh của G, với 1 ≤u ≤ n ≤ 100, m ≤ n(n-1)/2.
- Trong m dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤m) chứa hai số nguyên u[i],v[i] là đỉnh đầu và đỉnh cuối của cạnh e[i], với 1 ≤ u[i], v[i] ≤ n.

**Kết quả**: Ghi ra tệp CT.OUT:

- Dòng đầu ghi giá trị t là số lượng các chu trình Hamilton tìm được.
- Trong trường hợp t > 0, tiếp theo ghi ra t dòng, mỗi dòng ghi dãy các đỉnh của một chu trình Hamilton.

Ví dụ:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th>CT.in</th><th>CT.out</th><th>Giải thích</th></tr><tr><td>4 4 1<br>1 2<br>2 3<br>3 4<br>4 1<br></td><td>1<br>1 2 3 4 1<br></td><td>Chu trình Hamilton bắt đầu tại<br>đỉnh u = 1 đi qua các cạnh theo<br>thứ tự (1,2), (2,3), (3,4) và (4,1).<br></td></tr><tr><td>4 4 1<br>1 2<br>2 3<br>3 4<br>4 2<br></td><td>0</td><td>Đồ thị không chứa chu trình<br>Hamilton bắt đầu tại đỉnh u = 1<br></td></tr></tbody></table>

Giới hạn thời gian: 2s
Giới hạn bộ nhớ: 65536 Kb

---

## CT006 - Chu trình Hamilton 03

(Tệp chương trình: CT.CPP; Thời gian chạy chương trình ≤ 1 giây)

Cho trước đồ thị có trọng số G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận trọng số không âm và một đỉnh u.

**Yêu cầu**: Tìm chu trình Hamilton của G bắt đầu tại u có tổng trọng số trên các cạnh là nhỏ nhất sử dụng thuật toán duyệt toàn thể.

Dữ liệu: Vào từ tệp CT.INP:

- Dòng đầu chứa hai số nguyên dương n và u, trong đó n là số đỉnh, u là đỉnh của G, với 1 ≤ u ≤ n ≤ 100.
- Trong n dòng tiếp theo, mỗi dòng thứ i chứa n số tự nhiên c[i][j] mô tả ma trận trọng số của G. Trong đó, với hai đỉnh i, j (i khác j) có cạnh nối thì 0 < c[i][j] ≤ 50, nếu không có cạnh nối thì c[i][j] = 10000 và c[i][i] = 0.

Kết quả: Ghi ra tệp CT.OUT:

- Nếu tìm được chu trình Hamilton thỏa mãn yêu cầu thì ghi ra theo quy cách:

1.  Dòng đầu ghi tổng trọng số của tất cả các cạnh trong chu trình Hamilton tìm được;
2.  Dòng sau ghi dãy các đỉnh trên chu trình Hamilton tìm được bắt đầu từ u.

- Nếu không có chu trình Hamilton thì ghi giá trị 0.

Ví dụ:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th>CT.in</th><th>CT.out</th><th>Giải thích</th></tr><tr><td>5 1<br>0 31 25 23 10<br>16 0 2 7 12<br>3 3 0 25 54<br>15 2 33 0 50<br>16 15 32 3 0<br></td><td>20<br>1 5 4 2 3 1<br></td><td>Chu trình Hamilton bắt<br>đầu tại u = 1 có tổng trọng số<br>trên các cạnh là nhỏ nhất gồm<br>các cạnh (1,5), (5,4), (4,2), (2,3)<br>và (3,1) với tổng trọng số 20.<br></td></tr><tr><td>5 2<br>0 2 10000 10000 10000<br>2 0 3 1 10000<br>10000 3 0 4 5<br>10000 1 4 0 5<br>10000 10000 5 5 0<br></td><td>0</td><td>Không có chu trình Hamilton bắt đầu tại u = 2.<br></td></tr></tbody></table>

Giới hạn thời gian: 2s
Giới hạn bộ nhớ: 65536 Kb

---

## DT001 - Ma trận kề - Danh sách cạnh

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

**Yêu cầu:**

(1) Xác định bậc các đỉnh của G;

(2) Biểu diễn G dưới dạng danh sách cạnh.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra theo qui cách:

* Dòng đầu ghi ra hai số tự nhiên n và m là số đỉnh và số cạnh của G.

* Trong m dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ m) ghi hai số u[i], v[i] là đỉnh đầu và đỉnh cuối của cạnh e[i]. Các cạnh                   của G được đánh số theo thứ tự từ điển.

**Ví dụ:**

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th>DT.INP</th><th>DT.OUT</th><th>Giải thích</th></tr><tr><td>1<br>4<br>0 1 0 1<br>1 0 1 0<br>0 1 0 0<br>1 0 0 0<br></td><td>2 2 1 1</td><td>Bậc của đỉnh 1 và 2 là 2, bậc của đỉnh 3 và 4 là 1.</td></tr><tr><td>2<br>4<br>0 1 0 1<br>1 0 1 0<br>0 1 0 0<br>1 0 0 0<br></td><td>4 3<br>1 2<br>1 4<br>2 3<br></td><td>Đồ thị có 4 đỉnh và 3 cạnh là (1,2), (1,4), (2,3)</td></tr></tbody></table>

Giới hạn thời gian: 2s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1001 - 1.1 Đồ thị

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

**Yêu cầu**:

(1) Xác định bậc các đỉnh của G;

(2) Biểu diễn G dưới dạng danh sách cạnh.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra theo qui cách:

* Dòng đầu ghi ra hai số tự nhiên n và m là số đỉnh và số cạnh của G.

* Trong m dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ m) ghi hai số u[i], v[i] là đỉnh đầu và đỉnh cuối của cạnh e[i]. Các cạnh của G được đánh số theo thứ tự từ điển.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4<br>0 1 0 1<br>1 0 1 0<br>0 1 0 0<br>1 0 0 0<br></td><td>2 2 1 1<br></td><td>Bậc của đỉnh 1 và 2 là 2, bậc của đỉnh 3 và 4 là 1.<br></td></tr><tr><td>2<br>4<br>0 1 0 1<br>1 0 1 0<br>0 1 0 0<br>1 0 0 0<br></td><td>4 3<br>1 2<br>1 4<br>2 3<br></td><td>Đồ thị có 3 cạnh (1,2), (1,4) và (2,3).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1002 - 1.2 Đồ thị

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

**Yêu cầu**:

(1) Xác định bậc các đỉnh của G;

(2) Biểu diễn G dưới dạng danh sách kề.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra theo qui cách:

* Dòng đầu ghi ra số tự nhiên n là số đỉnh của G.

* Trong n dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ n) ghi số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v[1], …, v[k] là số hiệu các đỉnh kề tương ứng.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4<br>0 1 0 1<br>1 0 1 0<br>0 1 0 0<br>1 0 0 0<br></td><td>2 2 1 1<br></td><td>Bậc của đỉnh 1 và 2 là 2, bậc của đỉnh 3 và 4 là 1.<br></td></tr><tr><td>2<br>4<br>0 1 0 1<br>1 0 1 0<br>0 1 0 0<br>1 0 0 0<br></td><td>4<br>2 2 4<br>2 1 3<br>1 2<br>1 1<br></td><td>Đỉnh 1 có 2 đỉnh kề là 2 và 4.<br>Đỉnh 2 có 2 đỉnh kề là 1 và 3.<br>Đỉnh 3 có 1 đỉnh kề là 2.<br>Đỉnh 4 có 1 đỉnh kề là 1.<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1003 - 1.3 Đồ thị

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

**Yêu cầu**:

(1) Xác định bậc các đỉnh của G;

(2) Biểu diễn G dưới dạng ma trận liên thuộc.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra n+1 dòng:

* Dòng đầu ghi ra hai số tự nhiên n và m là số hàng và số cột của ma trận liên thuộc.

* Trong n dòng tiếp theo, mỗi dòng ghi m số 0 hoặc 1 mô tả ma trận liên thuộc tìm được. Các cạnh của G được đánh số theo thứ tự từ điển.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4<br>0 1 0 1<br>1 0 1 0<br>0 1 0 0<br>1 0 0 0<br></td><td>2 2 1 1<br></td><td>Bậc của đỉnh 1 và 2 là 2, bậc của đỉnh 3 và 4 là 1.<br></td></tr><tr><td>2<br>4<br>0 1 0 1<br>1 0 1 0<br>0 1 0 0<br>1 0 0 0<br></td><td>4 3<br>1 1 0<br>1 0 1<br>0 0 1<br>0 1 0<br></td><td>Đồ thị có 4 đỉnh và 3 cạnh (1,2), (1,4) và (2,3).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1004 - 1.4 Đồ thị

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh.

**Yêu cầu**:

(1) Xác định bậc các đỉnh của G;

(2) Biểu diễn G dưới dạng ma trận kề.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh và m là số cạnh của G. Trong đó, 1 ≤ n ≤ 100 và 1 ≤ m ≤ n(n-1)/2.

- Trong m dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ m) chứa hai số nguyên u[i], v[i] là đỉnh đầu và đỉnh cuối của cạnh e[i]. Trong đó, 1 ≤ u[i] < v[i] ≤ n.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra n+1 dòng:

* Dòng đầu ghi ra số tự nhiên n là bậc của ma trận kề.

* Trong n dòng tiếp theo, mỗi dòng ghi n số 0 hoặc 1 mô tả ma trận kề tìm được.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4 3<br>1 2<br>1 4<br>2 3<br></td><td>2 2 1 1<br></td><td>Bậc của đỉnh 1 và 2 là 2, bậc của đỉnh 3 và 4 là 1.<br></td></tr><tr><td>2<br>4 3<br>1 2<br>1 4<br>2 3<br></td><td>4<br>0 1 0 1<br>1 0 1 0<br>0 1 0 0<br>1 0 0 0<br></td><td>Đồ thị có 4 đỉnh và 3 cạnh (1,2), (1,4) và (2,3).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1005 - 1.5 Đồ thị

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh.

**Yêu cầu**:

(1) Xác định bậc các đỉnh của G;

(2) Biểu diễn G dưới dạng danh sách kề.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh và m là số cạnh của G. Trong đó, 1 ≤ n ≤ 100 và 1 ≤ m ≤ n(n-1)/2.

- Trong m dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ m) chứa hai số nguyên u[i], v[i] là đỉnh đầu và đỉnh cuối của cạnh e[i]. Trong đó, 1 ≤ u[i] < v[i] ≤ n.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra n+1 dòng:

* Dòng đầu ghi ra số tự nhiên n là số đỉnh của G.

* Trong n dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ n) ghi số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v[1], …, v[k] là số hiệu các đỉnh kề tương ứng.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4 3<br>1 2<br>1 4<br>2 3<br></td><td>2 2 1 1<br></td><td>Bậc của đỉnh 1 và 2 là 2, bậc của đỉnh 3 và 4 là 1.<br></td></tr><tr><td>2<br>4 3<br>1 2<br>1 4<br>2 3<br></td><td>4<br>2 2 4<br>2 1 3<br>1 2<br>1 1<br></td><td>Đỉnh 1 có 2 đỉnh kề là 2 và 4.<br>Đỉnh 2 có 2 đỉnh kề là 1 và 3.<br>Đỉnh 3 có 1 đỉnh kề là 2.<br>Đỉnh 4 có 1 đỉnh kề là 1.<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1006 - 1.6 Đồ thị

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh.

**Yêu cầu**:

(1) Xác định bậc các đỉnh của G;

(2) Biểu diễn G dưới dạng ma trận liên thuộc.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh và m là số cạnh của G. Trong đó, 1 ≤ n ≤ 100 và 1 ≤ m ≤ n(n-1)/2.

- Trong m dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ m) chứa hai số nguyên u[i], v[i] là đỉnh đầu và đỉnh cuối của cạnh e[i]. Trong đó, 1 ≤ u[i] < v[i] ≤ n; Các cạnh của G được liệt kê theo thứ tự từ điển.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra n+1 dòng:

* Dòng đầu ghi ra hai số tự nhiên n và m là số hàng và số cột của ma trận liên thuộc.

* Trong n dòng tiếp theo, mỗi dòng ghi m số 0 hoặc 1 mô tả ma trận liên thuộc tìm được. Các cạnh của G được đánh số theo thứ tự từ điển.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4 3<br>1 2<br>1 4<br>2 3<br></td><td>2 2 1 1<br></td><td>Bậc của đỉnh 1 và 2 là 2, bậc của đỉnh 3 và 4 là 1.<br></td></tr><tr><td>2<br>4 3<br>1 2<br>1 4<br>2 3<br></td><td>4 3<br>1 1 0<br>1 0 1<br>0 0 1<br>0 1 0<br></td><td>Đồ thị có 4 đỉnh và 3 cạnh (1,2), (1,4) và (2,3).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1007 - 1.7 Đồ thị

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách kề.

**Yêu cầu**:

(1) Xác định bậc các đỉnh của G;

(2) Biểu diễn G dưới dạng ma trận kề.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh của G. Trong đó, 1 ≤ n ≤ 100.

- Trong n dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ n) chứa số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v[1], …, v[k] là số hiệu các đỉnh kề tương ứng.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra n+1 dòng:

* Dòng đầu ghi ra số tự nhiên n là bậc của ma trận kề.

* Trong n dòng tiếp theo, mỗi dòng ghi n số 0 hoặc 1 mô tả ma trận kề tìm được.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4<br>2 2 4<br>2 1 3<br>1 2<br>1 1<br></td><td>2 2 1 1<br></td><td>Bậc của đỉnh 1 và 2 là 2, bậc của đỉnh 3 và 4 là 1.<br></td></tr><tr><td>2<br>4<br>2 2 4<br>2 1 3<br>1 2<br>1 1<br></td><td>4<br>0 1 0 1<br>1 0 1 0<br>0 1 0 0<br>1 0 0 0<br></td><td>Đồ thị có 4 đỉnh và 3 cạnh (1,2), (1,4) và (2,3).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1008 - 1.8 Đồ thị

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách kề.

**Yêu cầu**:

(1) Xác định bậc các đỉnh của G;

(2) Biểu diễn G dưới dạng danh sách cạnh.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh của G. Trong đó, 1 ≤ n ≤ 100.

- Trong n dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ n) chứa số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v[1], …, v[k] là số hiệu các đỉnh kề tương ứng.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra theo qui cách:

* Dòng đầu ghi ra hai số tự nhiên n và m là số đỉnh và số cạnh của G.

* Trong m dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ m) ghi hai số u[i], v[i] là đỉnh đầu và đỉnh cuối của cạnh e[i]. Các cạnh của G được đánh số theo thứ tự từ điển

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4<br>2 2 4<br>2 1 3<br>1 2<br>1 1<br></td><td>2 2 1 1<br></td><td>Bậc của đỉnh 1 và 2 là 2, bậc của đỉnh 3 và 4 là 1.<br></td></tr><tr><td>2<br>4<br>2 2 4<br>2 1 3<br>1 2<br>1 1<br></td><td>4 3<br>1 2<br>1 4<br>2 3<br></td><td>Đồ thị có 3 cạnh (1,2), (1,4) và (2,3).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1009 - 1.9 Đồ thị

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách kề.

**Yêu cầu**:

(1) Xác định bậc các đỉnh của G;

(2) Biểu diễn G dưới dạng ma trận liên thuộc.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh của G. Trong đó, 1 ≤ n ≤ 100.

- Trong n dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ n) chứa số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v[1], …, v[k] là số hiệu các đỉnh kề tương ứng.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra n+1 dòng:

* Dòng đầu ghi ra hai số tự nhiên n và m là số hàng và số cột của ma trận liên thuộc.

* Trong n dòng tiếp theo, mỗi dòng ghi m số 0 hoặc 1 mô tả ma trận liên thuộc tìm được. Các cạnh của G được đánh số theo thứ tự từ điển.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4<br>2 2 4<br>2 1 3<br>1 2<br>1 1<br></td><td>2 2 1 1<br></td><td>Bậc của đỉnh 1 và 2 là 2, bậc của đỉnh 3 và 4 là 1.<br></td></tr><tr><td>2<br>4<br>2 2 4<br>2 1 3<br>1 2<br>1 1<br></td><td>4 3<br>1 1 0<br>1 0 1<br>0 0 1<br>0 1 0<br></td><td>Đồ thị có 4 đỉnh và 3 cạnh (1,2), (1,4) và (2,3).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1010 - 1.10 Đồ thị

Cho đồ thị vô hướng có trọng số G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận trọng số.

**Yêu cầu**:

(1) Xác định bậc các đỉnh của G;

(2) Biểu diễn G dưới dạng danh sách cạnh với trọng số.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

- Trong n dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ n) chứa n số tự nhiên c[i][j] (1 ≤ j ≤ n) mô tả ma trận trọng số của G. Trong đó, với hai đỉnh i, j (i khác j) có cạnh nối thì 0 < c[i][j] ≤ 50, nếu không có cạnh nối thì c[i][j] = 10000 và c[i][i] = 0.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra theo qui cách:

* Dòng đầu ghi ra hai số tự nhiên n và m là số đỉnh và số cạnh của G.

* Trong m dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ m) ghi ba số u[i], v[i], w[i] là đỉnh đầu, đỉnh cuối và trọng số của cạnh e[i]. Các cạnh của G được đánh số theo thứ tự từ điển.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4<br>0 1 10000 2<br>1 0 3 10000<br>10000 3 0 0<br>2 10000 0 0<br></td><td>2 2 1 1<br></td><td>Bậc của đỉnh 1 và 2 là 2, bậc của đỉnh 3 và 4 là 1.<br></td></tr><tr><td>2<br>4<br>0 1 10000 2<br>1 0 3 10000<br>10000 3 0 0<br>2 10000 0 0<br></td><td>4 3<br>1 2 1<br>1 4 2<br>2 3 3<br></td><td>Đồ thị có 3 cạnh (1,2), (1,4) và (2,3) với trọng số tương ứng là 1, 2, 3.<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1011 - 1.11 Đồ thị

Cho đồ thị vô hướng có trọng số G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh với trọng số.

**Yêu cầu**:

(1) Xác định bậc các đỉnh của G;

(2) Biểu diễn G dưới dạng ma trận trọng số.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên dương n và m là số đỉnh và số cạnh của G, n ≤ 100 và 1 ≤ m ≤ n(n-1)/2.

- Trong m dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ m) chứa ba số u[i], v[i], w[i] là đỉnh đầu, đỉnh cuối và trọng số của cạnh e[i]. Trong đó, 1 ≤ u[i] < v[i] ≤ n và 1 ≤ w[i] ≤ 50.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra theo qui cách:

* Dòng đầu ghi ra số tự nhiên n là số đỉnh của G.

* Trong n dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ n) chứa n số tự nhiên c[i][j] (1 ≤ j ≤ n) mô tả ma trận trọng số của G. Trong đó, với hai đỉnh i, j (i khác j) có cạnh nối thì 0 < c[i][j] ≤ 50, nếu không có cạnh nối thì c[i][j] = 10000 và c[i][i] = 0.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4 3<br>1 2 1<br>1 4 2<br>2 3 3<br></td><td>2 2 1 1<br>&nbsp;<br>&nbsp;<br></td><td>Bậc của đỉnh 1 và 2 là 2, bậc của đỉnh 3 và 4 là 1.<br></td></tr><tr><td>2<br>4 3<br>1 2 1<br>1 4 2<br>2 3 3<br></td><td>4<br>0 1 10000 2<br>1 0 3 10000<br>10000 3 0 10000<br>2 10000 10000 0<br></td><td>Đồ thị có 3 cạnh (1,2), (1,4) và (2,3) với trọng số tương ứng là 1, 2, 3.<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1012 - 1.12 Đồ thị

Cho đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

**Yêu cầu**:

(1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;

(2) Biểu diễn G dưới dạng danh sách cạnh.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 ≤ i ≤ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra theo qui cách:

* Dòng đầu ghi ra hai số tự nhiên n và m là số đỉnh và số cạnh của G.

* Trong m dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ m) ghi hai số u[i], v[i] là đỉnh đầu và đỉnh cuối của cạnh e[i]. Các cạnh của G được đánh số theo thứ tự từ điển.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4<br>0 1 0 1<br>0 0 1 1<br>1 1 0 0<br>0 0 1 0<br></td><td>1 2<br>2 2<br>2 2<br>2 1<br></td><td>Có deg-(1) = 1, deg+(1) = 2; deg-(2) = deg+(2) = 2; &nbsp;deg-(3) = deg+(3) = 2; deg-(4) = 2, deg+(4) = 1.<br></td></tr><tr><td>2<br>4<br>0 1 0 1<br>0 0 1 1<br>1 1 0 0<br>0 0 1 0<br></td><td>4 7<br>1 2<br>1 4<br>2 3<br>2 4<br>3 1<br>3 2<br>4 3<br></td><td>Đồ thị có 4 đỉnh và 7 cạnh (1,2), (1,4), (2,3), (2,4), (3,1), (3,2) và (4,3).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1013 - 1.13 Đồ thị

Cho đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

**Yêu cầu**:

(1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;

(2) Biểu diễn G dưới dạng danh sách kề.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 ≤ i ≤ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra theo qui cách:

* Dòng đầu ghi ra số tự nhiên n là số đỉnh của G.

* Trong n dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ n) ghi số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v[1], …, v[k] là số hiệu các đỉnh kề tương ứng.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4<br>0 1 0 1<br>0 0 1 1<br>1 1 0 0<br>0 0 1 0<br></td><td>1 2<br>2 2<br>2 2<br>2 1<br></td><td>Có deg-(1) = 1, deg+(1) = 2; deg-(2) = deg+(2) = 2; &nbsp;deg-(3) = deg+(3) = 2; deg-(4) = 2, deg+(4) = 1.<br></td></tr><tr><td>2<br>4<br>0 1 0 1<br>0 0 1 1<br>1 1 0 0<br>0 0 1 0<br></td><td>4<br>2 2 4<br>2 3 4<br>2 1 2<br>1 3<br></td><td>Đỉnh 1 có 2 đỉnh kề là 2 và 4.<br>Đỉnh 2 có 2 đỉnh kề là 3 và 34<br>Đỉnh 3 có 2 đỉnh kề là 1 và 2.<br>Đỉnh 4 có 1 đỉnh kề là 3.<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1014 - 1.14 Đồ thị

Cho đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

**Yêu cầu**:

(1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;

(2) Biểu diễn G dưới dạng ma trận liên thuộc.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 ≤ i ≤ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra n+1 dòng:

* Dòng đầu ghi ra hai số tự nhiên n và m là số hàng và số cột của ma trận liên thuộc.

* Trong n dòng tiếp theo, mỗi dòng ghi m số 0, 1 hoặc -1 mô tả ma trận liên thuộc tìm được. Các cạnh của G được đánh số theo thứ tự từ điển.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4<br>0 1 0 1<br>0 0 1 1<br>1 1 0 0<br>0 0 1 0<br></td><td>1 2<br>2 2<br>2 2<br>2 1<br></td><td>Có deg-(1) = 1, deg+(1) = 2; deg-(2) = deg+(2) = 2; &nbsp;deg-(3) = deg+(3) = 2; deg-(4) = 2, deg+(4) = 1.<br></td></tr><tr><td>2<br>4<br>0 1 0 1<br>0 0 1 1<br>1 1 0 0<br>0 0 1 0<br></td><td>4 7<br>1 &nbsp;1 &nbsp;0 &nbsp;0 -1 &nbsp;0 &nbsp;0<br>-1 0 &nbsp;1 &nbsp;1 &nbsp;0 -1 &nbsp;0<br>0 &nbsp;0 -1 &nbsp;0 &nbsp;1 &nbsp;1 -1<br>0 -1 &nbsp;0 -1 &nbsp;0 &nbsp;0 &nbsp;1<br></td><td>Đồ thị có 7 cạnh (1,2), (1,4), (2,3), (2,4), (3,1), (3,2) và (4,3).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1015 - 1.15 Đồ thị

Cho đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh.

**Yêu cầu**:

(1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;

(2) Biểu diễn G dưới dạng ma trận kề.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh và m là số cạnh của G. Trong đó, 1 ≤ n ≤ 100 và 1 ≤ m ≤ n(n-1)/2.

- Trong m dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ m) chứa hai số nguyên u[i], v[i] là đỉnh đầu và đỉnh cuối của cạnh e[i]. Trong đó, 1 ≤ u[i] < v[i] ≤ n.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 ≤ i ≤ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra n+1 dòng:

* Dòng đầu ghi ra số tự nhiên n là bậc của ma trận kề.

* Trong n dòng tiếp theo, mỗi dòng ghi n số 0 hoặc 1 mô tả ma trận kề tìm được

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4 7<br>1 2<br>1 4<br>2 3<br>2 4<br>3 1<br>3 2<br>4 3<br></td><td>1 2<br>2 2<br>2 2<br>2 1<br></td><td>Có deg-(1) = 1, deg+(1) = 2; deg-(2) = deg+(2) = 2; &nbsp;deg-(3) = deg+(3) = 2; deg-(4) = 2, deg+(4) = 1.<br></td></tr><tr><td>2<br>4 7<br>1 2<br>1 4<br>2 3<br>2 4<br>3 1<br>3 2<br>4 3<br></td><td>4<br>0 1 0 1<br>0 0 1 1<br>1 1 0 0<br>0 0 1 0<br></td><td>Đồ thị có 4 đỉnh và 7 cạnh (1,2), (1,4), (2,3), (2,4), (3,1), (3,2) và (4,3).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1016 - 1.16 Đồ thị

Cho đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh.

**Yêu cầu**:

(1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;

(2) Biểu diễn G dưới dạng danh sách kề.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh và m là số cạnh của G. Trong đó, 1 ≤ n ≤ 100 và 1 ≤ m ≤ n(n-1)/2.

- Trong m dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ m) chứa hai số nguyên u[i], v[i] là đỉnh đầu và đỉnh cuối của cạnh e[i]. Trong đó, 1 ≤ u[i] < v[i] ≤ n.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 ≤ i ≤ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra n+1 dòng:

* Dòng đầu ghi ra số tự nhiên n là số đỉnh của G.

* Trong n dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ n) ghi số tự nhiên k là số lượng đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v[1], …, v[k] là số hiệu các đỉnh kề tương ứng.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4 7<br>1 2<br>1 4<br>2 3<br>2 4<br>3 1<br>3 2<br>4 3<br></td><td>1 2<br>2 2<br>2 2<br>2 1<br></td><td>Có deg-(1) = 1, deg+(1) = 2; deg-(2) = deg+(2) = 2; &nbsp;deg-(3) = deg+(3) = 2; deg-(4) = 2, deg+(4) = 1.<br></td></tr><tr><td>2<br>4 7<br>1 2<br>1 4<br>2 3<br>2 4<br>3 1<br>3 2<br>4 3<br></td><td>4<br>2 2 4<br>2 3 4<br>2 1 2<br>1 3<br></td><td>Đỉnh 1 có 2 đỉnh kề là 2 và 4.<br>Đỉnh 2 có 2 đỉnh kề là 3 và 4.<br>Đỉnh 3 có 2 đỉnh kề là 1 và 2.<br>Đỉnh 4 có 1 đỉnh kề là 3.<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1017 - 1.17 Đồ thị

Cho đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh.

**Yêu cầu**:

(1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;

(2) Biểu diễn G dưới dạng ma trận liên thuộc.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh và m là số cạnh của G. Trong đó, 1 ≤ n ≤ 100 và 1 ≤ m ≤ n(n-1)/2.

- Trong m dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ m) chứa hai số nguyên u[i], v[i] là đỉnh đầu và đỉnh cuối của cạnh e[i]. Trong đó, 1 ≤ u[i] < v[i] ≤ n.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 ≤ i ≤ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra n+1 dòng:

* Dòng đầu ghi ra hai số tự nhiên n và m là số hàng và số cột của ma trận liên thuộc.

* Trong n dòng tiếp theo, mỗi dòng ghi m số 0, 1 hoặc -1 mô tả ma trận liên thuộc tìm được. Các cạnh của G được đánh số theo thứ tự từ điển.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4 7<br>1 2<br>1 4<br>2 3<br>2 4<br>3 1<br>3 2<br>4 3<br></td><td>1 2<br>2 2<br>2 2<br>2 1<br></td><td>Có deg-(1) = 1, deg+(1) = 2; deg-(2) = deg+(2) = 2; &nbsp;deg-(3) = deg+(3) = 2; deg-(4) = 2, deg+(4) = 1.<br></td></tr><tr><td>2<br>4 7<br>1 2<br>1 4<br>2 3<br>2 4<br>3 1<br>3 2<br>4 3<br></td><td>4 7<br>1 &nbsp;1 &nbsp;0 &nbsp;0 -1 &nbsp;0 &nbsp;0<br>-1 0 &nbsp;1 &nbsp;1 &nbsp;0 -1 &nbsp;0<br>0 &nbsp;0 -1 &nbsp;0 &nbsp;1 &nbsp;1 -1<br>0 -1 &nbsp;0 -1 &nbsp;0 &nbsp;0 &nbsp;1<br></td><td>Đồ thị có 4 đỉnh và 7 cạnh (1,2), (1,4), (2,3), (2,4), (3,1), (3,2) và (4,3).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1018 - 1.18 Đồ thị

Cho đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách kề.

**Yêu cầu**:

(1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;;

(2) Biểu diễn G dưới dạng ma trận kề.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh của G. Trong đó, 1 ≤ n ≤ 100.

- Trong n dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ n) chứa số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v[1], …, v[k] là số hiệu các đỉnh kề tương ứng.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 ≤ i ≤ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra n+1 dòng:

* Dòng đầu ghi ra số tự nhiên n là bậc của ma trận kề.

* Trong n dòng tiếp theo, mỗi dòng ghi n số 0 hoặc 1 mô tả ma trận kề tìm được.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4<br>2 2 4<br>2 3 4<br>2 1 2<br>1 3<br></td><td>1 2<br>2 2<br>2 2<br>2 1<br></td><td>Có deg-(1) = 1, deg+(1) = 2; deg-(2) = deg+(2) = 2; &nbsp;deg-(3) = deg+(3) = 2; deg-(4) = 2, deg+(4) = 1.<br></td></tr><tr><td>2<br>4<br>4<br>2 2 4<br>2 3 4<br>2 1 2<br>1 3<br></td><td>4<br>0 1 0 1<br>0 0 1 1<br>1 1 0 0<br>0 0 1 0<br></td><td>Đồ thị có 4 đỉnh.<br>Đỉnh 1 có 2 đỉnh kề là 2 và 4.<br>Đỉnh 2 có 2 đỉnh kề là 3 và 34<br>Đỉnh 3 có 2 đỉnh kề là 1 và 2.<br>Đỉnh 4 có 1 đỉnh kề là 3.<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1019 - 1.19 Đồ thị

Cho đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách kề.

**Yêu cầu**:

(1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;;

(2) Biểu diễn G dưới dạng danh sách cạnh.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên n là số đỉnh của G. Trong đó, 1 ≤ n ≤ 100.

- Trong n dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ n) chứa số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v[1], …, v[k] là số hiệu các đỉnh kề tương ứng.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 ≤ i ≤ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra theo qui cách:

* Dòng đầu ghi ra hai số tự nhiên n và m là số đỉnh và số cạnh của G.

* Trong m dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ m) ghi hai số u[i], v[i] là đỉnh đầu và đỉnh cuối của cạnh e[i]. Các cạnh của G được đánh số theo thứ tự từ điển.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4<br>2 2 4<br>2 3 4<br>2 1 2<br>1 3<br></td><td>1 2<br>2 2<br>2 2<br>2 1<br></td><td>Có deg-(1) = 1, deg+(1) = 2; deg-(2) = deg+(2) = 2; &nbsp;deg-(3) = deg+(3) = 2; deg-(4) = 2, deg+(4) = 1.<br></td></tr><tr><td>2<br>4<br>2 2 4<br>2 3 4<br>2 1 2<br>1 3<br></td><td>4 7<br>1 2<br>1 4<br>2 3<br>2 4<br>3 1<br>3 2<br>4 3<br></td><td>Đồ thị có 4 đỉnh và 7 cạnh (1,2), (1,4), (2,3), (2,4), (3,1), (3,2) và (4,3).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1020 - 1.20 Đồ thị

Cho đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách kề.

**Yêu cầu**:

(1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;;

(2) Biểu diễn G dưới dạng ma trận liên thuộc.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên n là số đỉnh của G. Trong đó, 1 ≤ n ≤ 100.

- Trong n dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ n) chứa số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v[1], …, v[k] là số hiệu các đỉnh kề tương ứng.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 ≤ i ≤ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra n+1 dòng:

* Dòng đầu ghi ra hai số tự nhiên n và m là số hàng và số cột của ma trận liên thuộc.

* Trong n dòng tiếp theo, mỗi dòng ghi m số 0, 1 hoặc -1 mô tả ma trận liên thuộc tìm được. Các cạnh của G được đánh số theo thứ tự từ điển.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4<br>2 2 4<br>2 3 4<br>2 1 2<br>1 3<br></td><td>1 2<br>2 2<br>2 2<br>2 1<br></td><td>Có deg-(1) = 1, deg+(1) = 2; deg-(2) = deg+(2) = 2; &nbsp;deg-(3) = deg+(3) = 2; deg-(4) = 2, deg+(4) = 1.<br></td></tr><tr><td>2<br>4<br>2 2 4<br>2 3 4<br>2 1 2<br>1 3<br></td><td>4 7<br>1 &nbsp;1 &nbsp;0 &nbsp;0 -1 &nbsp;0 &nbsp;0<br>-1 0 &nbsp;1 &nbsp;1 &nbsp;0 -1 &nbsp;0<br>0 &nbsp;0 -1 &nbsp;0 &nbsp;1 &nbsp;1 -1<br>0 -1 &nbsp;0 -1 &nbsp;0 &nbsp;0 &nbsp;1<br></td><td>Đồ thị có 4 đỉnh và 7 cạnh (1,2), (1,4), (2,3), (2,4), (3,1), (3,2) và (4,3).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1021 - 1.21 Đồ thị

Cho đồ thị có hướng có trọng số G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận trọng số.

**Yêu cầu**:

(1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;

(2) Biểu diễn G dưới dạng danh sách cạnh với trọng số.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

- Trong n dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ n) chứa n số tự nhiên c[i][j] (1 ≤ j ≤ n) mô tả ma trận trọng số của G. Trong đó, với hai đỉnh i, j (i khác j) có cạnh nối thì 0 < c[i][j] ≤ 50, nếu không có cạnh nối thì c[i][j] = 10000 và c[i][i] = 0.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 ≤ i ≤ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra theo qui cách:

* Dòng đầu ghi ra hai số tự nhiên n và m là số đỉnh và số cạnh của G.

* Trong m dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ m) ghi ba số u[i], v[i], w[i] là đỉnh đầu, đỉnh cuối và trọng số của cạnh e[i]. Các cạnh của G được đánh số theo thứ tự từ điển.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4<br>0 1 10000 2<br>10000 0 3 4<br>5 6 0 10000<br>10000 10000 7 0<br></td><td>1 2<br>2 2<br>2 2<br>2 1<br></td><td>Có deg-(1) = 1, deg+(1) = 2; deg-(2) = deg+(2) = 2; &nbsp;deg-(3) = deg+(3) = 2; deg-(4) = 2, deg+(4) = 1.<br></td></tr><tr><td>2<br>4<br>0 1 10000 2<br>10000 0 3 4<br>5 6 0 10000<br>10000 10000 7 0<br></td><td>4 7<br>1 2 1<br>1 4 2<br>2 3 3<br>2 4 4<br>3 1 5<br>3 2 6<br>4 3 7<br></td><td>Đồ thị có 4 đỉnh và 7 cạnh (1,2), (1,4), (2,3), (2,4), (3,1), (3,2) và (4,3) với các trọng số tương ứng la 1, 2, 3, 4, 5, 6 và 7.<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR1022 - 1.22 Đồ thị

Cho đồ thị có hướng có trọng số G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh với trọng số.

**Yêu cầu**:

(1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;

(2) Biểu diễn G dưới dạng ma trận trọng số.

**Dữ liệu:** Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên dương n và m là số đỉnh và số cạnh của G, n ≤ 100 và 1 ≤ m ≤ n(n-1)/2.

- Trong m dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ m) chứa ba số u[i], v[i], w[i] là đỉnh đầu, đỉnh cuối và trọng số của cạnh e[i]. Trong đó, 1 ≤ u[i] < v[i] ≤ n và 1 ≤ w[i] ≤ 50.

**Kết quả:** Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 ≤ i ≤ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra theo qui cách:

* Dòng đầu ghi ra số tự nhiên n là số đỉnh của G.

* Trong n dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ n) chứa n số tự nhiên c[i][j] (1 ≤ j ≤ n) mô tả ma trận trọng số của G. Trong đó, với hai đỉnh i, j (i khác j) có cạnh nối thì 0 < c[i][j] ≤ 50, nếu không có cạnh nối thì c[i][j] = 10000 và c[i][i] = 0.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>DT.INP</strong><br></th><th><strong>DT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4 7<br>1 2 1<br>1 4 2<br>2 3 3<br>2 4 4<br>3 1 5<br>3 2 6<br>4 3 7<br></td><td>1 2<br>2 2<br>2 2<br>2 1<br></td><td>Có deg-(1) = 1, deg+(1) = 2; deg-(2) = deg+(2) = 2; &nbsp;deg-(3) = deg+(3) = 2; deg-(4) = 2, deg+(4) = 1.<br></td></tr><tr><td>2<br>4 7<br>1 2 1<br>1 4 2<br>2 3 3<br>2 4 4<br>3 1 5<br>3 2 6<br>4 3 7<br></td><td>4<br>0 1 10000 2<br>10000 0 3 4<br>5 6 0 10000<br>10000 10000 7 0<br></td><td>Đồ thị có 4 đỉnh và 7 cạnh (1,2), (1,4), (2,3), (2,4), (3,1), (3,2) và (4,3) với các trọng số tương ứng la 1, 2, 3, 4, 5, 6 và 7.<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR2001 - 2.1 Đường đi

Cho trước đồ thị G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề và hai đỉnh u, v.

**Yêu cầu**:

(1) Tìm số lượng đường đi độ dài 2 trên G từ đỉnh u đến v.

(2) Tìm đường đi trên G từ đỉnh u đến v sử dụng thuật toán tìm kiếm theo chiều sâu (DFS).

**Dữ liệu:** Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa ba số nguyên dương n, u và v. Trong đó, n là số đỉnh của G, u và v là hai đỉnh của G, với 1 ≤ u, v ≤ n ≤ 100 và u khác v.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

**Kết quả:** Ghi ra tệp TK.OUT:

- Nếu t = 1 thì ghi ra giá trị là số lượng đường đi độ dài 2 trên G từ đỉnh u đến v.

- Nếu t = 2 thì ghi ra trên một dòng gồm dãy các đỉnh mô tả đường đi trên G từ u đến v. Trong trường hợp không có đường đi trên G từ u đến v thì ghi số 0.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>TK.INP</strong><br></th><th><strong>TK.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4 2 4<br>0 1 0 1<br>1 0 1 0<br>0 1 0 1<br>1 0 1 0<br></td><td>2<br></td><td>Có &nbsp;2 đường đi độ dài 2 trên G từ đỉnh 2 đến 4 theo các cạnh là (2,1), (1,4) và (2,3), (3,4).<br></td></tr><tr><td>2<br>4 1 4<br>0 0 1 0<br>0 0 0 1<br>0 1 0 1<br>1 0 0 0<br></td><td>1 3 2 4<br></td><td>Đường đi từ đỉnh 1 đến đỉnh 4 tìm được theo DFS qua các cạnh theo thứ tự (1,3), (3,2) và (2,4).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR2002 - 2.2 Đường đi

Cho trước đồ thị G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề và hai đỉnh u, v.

**Yêu cầu**:

(1) Tìm số lượng đường đi độ dài 2 trên G từ đỉnh u đến v.

(2) Tìm đường đi trên G từ đỉnh u đến v sử dụng thuật toán tìm kiếm theo chiều rộng (BFS).

**Dữ liệu:** Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa ba số nguyên dương n, u và v. Trong đó, n là số đỉnh của G, u và v là hai đỉnh của G, với 1 ≤ u, v ≤ n ≤ 100 và u khác v.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

**Kết quả:** Ghi ra tệp TK.OUT:

- Nếu t = 1 thì ghi ra giá trị là số lượng đường đi độ dài 2 trên G từ đỉnh u đến v.

- Nếu t = 2 thì ghi ra trên một dòng gồm dãy các đỉnh mô tả đường đi trên G từ u đến v. Trong trường hợp không có đường đi trên G từ u đến v thì ghi số 0.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>TK.INP</strong><br></th><th><strong>TK.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4 2 4<br>0 1 0 1<br>1 0 1 0<br>0 1 0 1<br>1 0 1 0<br></td><td>2<br></td><td>Có &nbsp;2 đường đi độ dài 2 trên G từ đỉnh 2 đến 4 theo các cạnh là (2,1), (1,4) và (2,3), (3,4).<br></td></tr><tr><td>2<br>4 1 4<br>0 0 1 0<br>0 0 0 1<br>0 1 0 1<br>1 0 0 0<br></td><td>1 3 4<br></td><td>Đường đi từ đỉnh 1 đến đỉnh 4 tìm được theo BFS qua các cạnh theo thứ tự (1,3) và (3,4).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR2009 - 2.9 Liên thông

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

**Yêu cầu**: Tìm các thành phần liên thông của G sử dụng thuật toán tìm kiếm theo chiều sâu (DFS).

**Dữ liệu:** Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương n là số đỉnh của G, n ≤ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

**Kết quả:** Ghi ra tệp TK.OUT:

- Dòng đầu ghi ra giá trị lt là số lượng các thành phần liên thông của G.

- Trong lt dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ lt) ghi các đỉnh thuộc thành phần liên thông thứ i theo thứ tự tăng.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>TK.INP</strong><br></th><th><strong>TK.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>5<br>0 1 1 0 0<br>1 0 1 0 0<br>1 1 0 0 0<br>0 0 0 0 1<br>0 0 0 1 0<br></td><td>2<br>1 2 3<br>4 5<br></td><td>Đồ thị có hai thành phần liên thông.<br>Thành phần liên thông thứ 1 gồm các đỉnh 1, 2 và 3.<br>Thành phần liên thông thứ 2 gồm các đỉnh 4 và 5.<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR2012 - 2.12 Liên thông

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

**Yêu cầu**: Tìm các thành phần liên thông của G sử dụng thuật toán tìm kiếm theo chiều rộng (BFS).

**Dữ liệu:** Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương n là số đỉnh của G, n ≤ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

**Kết quả:** Ghi ra tệp TK.OUT:

- Dòng đầu ghi ra giá trị lt là số lượng các thành phần liên thông của G.

- Trong lt dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ lt) ghi các đỉnh thuộc thành phần liên thông thứ i theo thứ tự tăng.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>TK.INP</strong><br></th><th><strong>TK.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>5<br>0 1 1 0 0<br>1 0 1 0 0<br>1 1 0 0 0<br>0 0 0 0 1<br>0 0 0 1 0<br></td><td>2<br>1 2 3<br>4 5<br></td><td>Đồ thị có 2 thành phần liên thông.<br>Thành phần liên thông thứ 1 gồm các đỉnh 1, 2 và 3.<br>Thành phần liên thông thứ 2 gồm các đỉnh 4 và 5.<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR2015 - 2.15 Liên thông

Cho trước đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

**Yêu cầu**: Xác định tính liên thông của G sử dụng thuật toán tìm kiếm theo chiều sâu (DFS).

**Dữ liệu:** Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương n là số đỉnh của G, n ≤ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

**Kết quả:** Ghi ra tệp TK.OUT theo quy cách :

- Ghi ra giá trị 1 nếu G liên thông mạnh.

- Ghi ra giá trị 2 nếu G liên thông không liên thông mạnh nhưng liên thông yếu.

- Ghi ra giá trị 0 nếu G liên thông không liên thông mạnh và không liên thông yếu.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>TK.INP</strong><br></th><th><strong>TK.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>4<br>0 0 1 0<br>0 0 0 1<br>0 1 0 0<br>1 0 0 0<br></td><td>1<br></td><td>Đồ thị liên thông mạnh.<br></td></tr><tr><td>4<br>0 0 1 0<br>0 0 0 1<br>0 1 0 0<br>&nbsp;0 0 1 0<br></td><td>2<br></td><td>Đồ thị không liên thông mạnh nhưng liên thông yếu.<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR2018 - 2.18 Liên thông

[Lỗi khi tải nội dung]

---

## TRR2021 - 2.21 Đỉnh trụ

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

**Yêu cầu**: Tìm các đỉnh trụ của G sử dụng thuật toán tìm kiếm theo chiều sâu (DFS).

**Dữ liệu:** Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương n là số đỉnh của G, n ≤ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

**Kết quả:** Ghi ra tệp TK.OUT:

- Dòng đầu ghi ra giá trị t là số lượng các đỉnh trụ của G.

- Trong trường hợp t > 0, dòng tiếp theo ghi các đỉnh trụ tìm được theo thứ tự tăng.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>TK.INP</strong><br></th><th><strong>TK.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>5<br>0 1 0 0 0<br>1 0 1 0 0<br>0 1 0 1 1<br>0 0 1 0 1<br>0 0 1 1 0<br></td><td>2<br>2 3<br></td><td>Đồ thị có hai đỉnh trụ là 2 và 3.<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR2024 - 2.24 Đỉnh trụ

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

**Yêu cầu**: Tìm các đỉnh trụ của G sử dụng thuật toán tìm kiếm theo chiều rộng (BFS).

**Dữ liệu:** Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương n là số đỉnh của G, n ≤ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

**Kết quả:** Ghi ra tệp TK.OUT:

- Dòng đầu ghi ra giá trị t là số lượng các đỉnh trụ của G.

- Trong trường hợp t > 0, dòng tiếp theo ghi các đỉnh trụ tìm được theo thứ tự tăng.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>TK.INP</strong><br></th><th><strong>TK.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>5<br>0 1 0 0 0<br>1 0 1 0 0<br>0 1 0 1 1<br>0 0 1 0 1<br>0 0 1 1 0<br></td><td>2<br>2 3<br></td><td>Đồ thị có hai đỉnh trụ là 2 và 3.<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR2027 - 2.27 Cạnh cầu

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

**Yêu cầu**: Tìm các cạnh cầu của G sử dụng thuật toán tìm kiếm theo chiều sâu (DFS).

**Dữ liệu:** Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương n là số đỉnh của G, n ≤ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

**Kết quả:** Ghi ra tệp TK.OUT:

- Dòng đầu ghi ra giá trị c là số lượng các cạnh cầu của G.

- Trong trường hợp c > 0, trong c dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ c) ghi hai số nguyên dương u[i] và v[i] là đỉnh đầu và đỉnh cuối của cạnh cầu thứ i tìm được. Các cạnh cầu được ghi ra theo thứ tự từ điển.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>TK.INP</strong><br></th><th><strong>TK.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>5<br>0 1 0 0 0<br>1 0 1 0 0<br>0 1 0 1 1<br>0 0 1 0 1<br>0 0 1 1 0<br></td><td>2<br>1 2<br>2 3<br></td><td>Đồ thị có hai cạnh cầu là (1,2) và (2,3).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR2030 - 2.30 Cạnh cầu

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

**Yêu cầu**: Tìm các cạnh cầu của G sử dụng thuật toán tìm kiếm theo chiều rộng (BFS).

**Dữ liệu:** Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương n là số đỉnh của G, n ≤ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

**Kết quả:** Ghi ra tệp TK.OUT:

- Dòng đầu ghi ra giá trị c là số lượng các cạnh cầu của G.

- Trong trường hợp c > 0, trong c dòng tiếp theo, mỗi dòng thứ i (1 ≤ i ≤ c) ghi hai số nguyên dương u[i] và v[i] là đỉnh đầu và đỉnh cuối của cạnh cầu thứ i tìm được. Các cạnh cầu được ghi ra theo thứ tự từ điển.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>TK.INP</strong><br></th><th><strong>TK.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>5<br>0 1 0 0 0<br>1 0 1 0 0<br>0 1 0 1 1<br>0 0 1 0 1<br>0 0 1 1 0<br></td><td>2<br>1 2<br>2 3<br></td><td>Đồ thị có hai cạnh cầu là (1,2) và (2,3).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR3001 - 3.1 Chu trình Euler

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

**Yêu cầu**:

(1) Kiểm tra G có phải là đồ thị Euler, nửa Euler hay không?

(2) Tìm một chu trình Euler bắt đầu tại đỉnh u của G là đồ thị Euler.

**Dữ liệu:** Vào từ tệp CT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Nếu t = 1 thì dòng thứ hai chứa số nguyên dương n là số đỉnh của G, n ≤ 100. Nếu t = 2 thì dòng thứ 2 chứa hai số nguyên dương n và u, trong đó n là số đỉnh và u là một đỉnh của G, 1 ≤ u ≤ n ≤ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G. Trong trường hợp t = 2 thì G là đồ thị Euler.

**Kết quả:** Ghi ra tệp CT.OUT:

- Nếu t = 1 thì ghi ra giá trị 1 nếu G là Euler, giá trị 2 nếu G là nửa Euler và giá trị 0 nếu G không phải là Euler và nửa Euler.

- Nếu t = 2 thì ghi ra trên một dòng gồm dãy các đỉnh mô tả chu trình Euler bắt đầu tại đỉnh u.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>CT.INP</strong><br></th><th><strong>CT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4<br>0 1 0 1<br>1 0 0 1<br>0 0 0 1<br>1 1 1 0<br></td><td>2<br></td><td>Đồ thị G là nửa Euler.<br></td></tr><tr><td>2<br>4 2<br>0 1 0 1<br>1 0 1 0<br>0 1 0 1<br>1 0 1 0<br></td><td>2 1 4 3 2<br></td><td>Chu trình Euler bắt đầu tại đỉnh u = 2 đi qua các cạnh theo thứ tự (2,1), (1,4), (4,3) và (3,2).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR3004 - 3.4 Chu trình Euler

Cho trước đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

**Yêu cầu**:

(1) Kiểm tra G có phải là đồ thị Euler, nửa Euler hay không?

(2) Tìm một chu trình Euler bắt đầu tại đỉnh u của G là đồ thị Euler.

**Dữ liệu:** Vào từ tệp CT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Nếu t = 1 thì dòng thứ hai chứa số nguyên dương n là số đỉnh của G, n ≤ 100. Nếu t = 2 thì dòng thứ 2 chứa hai số nguyên dương n và u, trong đó n là số đỉnh và u là một đỉnh của G, 1 ≤ u ≤ n ≤ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G. Trong trường hợp t = 2 thì G là đồ thị Euler.

**Kết quả:** Ghi ra tệp CT.OUT:

- Nếu t = 1 thì ghi ra giá trị 1 nếu G là Euler, giá trị 2 nếu G là nửa Euler và giá trị 0 nếu G không phải là Euler và nửa Euler.

- Nếu t = 2 thì ghi ra trên một dòng gồm dãy các đỉnh mô tả chu trình Euler bắt đầu tại đỉnh u.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>CT.INP</strong><br></th><th><strong>CT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>1<br>4<br>0 1 0 1<br>0 0 0 1<br>1 0 0 0<br>0 0 1 0<br></td><td>2<br></td><td>Đồ thị G là nửa Euler.<br></td></tr><tr><td>2<br>4 3<br>0 1 0 0<br>0 0 1 0<br>0 0 0 1<br>1 0 0 0<br></td><td>3 4 1 2 3<br></td><td>Chu trình Euler bắt đầu tại đỉnh u = 3 đi qua các cạnh theo thứ tự (3,4), (4,1), (1,2) và (2,3).<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb

---

## TRR3007 - 3.7 Chu trình Hamilton

Cho trước đồ thị G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề và một đỉnh u.

**Yêu cầu**: Tìm tất cả các chu trình Hamilton của G bắt đầu tại u.

**Dữ liệu:** Vào từ tệp CT.INP:

- Dòng đầu chứa hai số nguyên dương n là số đỉnh và u là một đỉnh của G, 1 ≤ u ≤ n ≤ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

**Kết quả:** Ghi ra tệp CT.OUT:

- Nếu không tìm được chu trình Hamilton thì ghi ra giá trị 0.

- Trong trường hợp tìm được chu trình Hamilton thì mỗi dòng ghi dãy các đỉnh của một chu trình Hamilton. Dòng cuối cùng ghi giá trị t là số lượng các chu trình Hamilton tìm được.

**Ví dụ**:

<table style="width:100%"><colgroup><col style="width:20%"> <col style="width:30%"> <col style="width:50%"></colgroup><tbody><tr><th><strong>CT.INP</strong><br></th><th><strong>CT.OUT</strong><br></th><th><strong>Giải thích</strong><br></th></tr><tr><td>4 1<br>0 1 0 0<br>0 0 1 0<br>0 0 0 1<br>1 0 0 0<br></td><td>1 2 3 4 1<br>1<br></td><td>Chu trình Hamilton bắt đầu tại đỉnh u = 1 đi qua các cạnh theo thứ tự (1,2), (2,3), (3,4) và (4,1).<br></td></tr><tr><td>4 1<br>0 1 0 0<br>1 0 1 0<br>0 1 0 1<br>0 0 1 0<br></td><td>0<br></td><td>Đồ thị không chứa chu trình Hamilton bắt đầu tại đỉnh u = 1.<br></td></tr></tbody></table>

Giới hạn thời gian: 1s
Giới hạn bộ nhớ: 65536 Kb
