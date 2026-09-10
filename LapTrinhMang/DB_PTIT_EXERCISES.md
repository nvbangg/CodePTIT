# DB PTIT - Tổng hợp câu hỏi Exercises

## Source: https://github.com/nvbangg/CodePTIT

- **Tổng số câu hỏi**: 37

---

## `TCP_CHARACTER` TCP - Character Stream
- Mã câu hỏi: `jNEYbPud`
- Exam Server: `36.50.135.242`
### Nội dung
<p>Một chương trình server cho phép kết nối qua giao thức TCP tại cổng 2208 (hỗ trợ thời gian giao tiếp tối đa cho mỗi yêu cầu là 5s). Yêu cầu là xây dựng một chương trình client tương tác với server sử dụng các luồng byte (BufferedWriter/BufferedReader) theo kịch bản sau: a. Gửi một chuỗi gồm mã sinh viên và mã câu hỏi với định dạng "studentCode;qCode". Ví dụ: "B15DCCN999;EC4F899B" b. Nhận một chuỗi ngẫu nhiên là danh sách các một số tên miền từ server Ví dụ: giHgWHwkLf0Rd0.io, I7jpjuRw13D.io, wXf6GP3KP.vn, MdpIzhxDVtTFTF.edu, TUHuMfn25chmw.vn, HHjE9.com, 4hJld2m2yiweto.vn, y2L4SQwH.vn, s2aUrZGdzS.com, 4hXfJe9giAA.edu c. Tìm kiếm các tên miền .edu và gửi lên server Ví dụ: MdpIzhxDVtTFTF.edu, 4hXfJe9giAA.edu d. Đóng kết nối và kết thúc chương trình.</p>

---

## `TCP_BYTE_RAW` TCP - Byte Stream
- Mã câu hỏi: `2bqXfIJH`
- Exam Server: `36.50.135.242`
### Nội dung
Một chương trình server hỗ trợ kết nối qua giao thức TCP tại cổng 2206 (hỗ trợ thời gian giao tiếp tối đa cho mỗi yêu cầu là 5s). Yêu cầu xây dựng chương trình client thực hiện kết nối tới server trên sử dụng luồng byte dữ liệu (InputStream/OutputStream) để trao đổi thông tin theo thứ tự:   a. Gửi mã sinh viên và mã câu hỏi theo định dạng "studentCode;qCode". Ví dụ: "B16DCCN999;FF49DC02"  b. Nhận dữ liệu từ server là một chuỗi các giá trị số nguyên được phân tách nhau bởi ký tự ","  Ex: 1,3,9,19,33,20  c. Thực hiện tìm giá trị khoảng cách nhỏ nhất của các phần tử nằm trong chuỗi và hai giá trị lớn nhất tạo nên khoảng cách đó. Gửi lên server chuỗi gồm "khoảng cách nhỏ nhất, số thứ nhất, số thứ hai". Ex: 1,19,20  d. Đóng kết nối và kết thúc

---

## `TCP_BYTE_RAW` TCP - Byte Stream
- Mã câu hỏi: `8x3KygT7`
- Exam Server: `36.50.135.242`
### Nội dung
Một chương trình server cho phép kết nối qua giao thức TCP tại cổng 2206 (thời gian giao tiếp tối đa cho mỗi yêu cầu là 5s). Yêu cầu là xây dựng một chương trình client tương tác tới server ở trên sử dụng các luồng byte (InputStream/OutputStream) để trao đổi thông tin theo thứ tự:   a. Gửi mã sinh viên và mã câu hỏi theo định dạng "studentCode;qCode". Ví dụ: "B16DCCN999;2B3A6510"  b. Nhận dữ liệu từ server là một chuỗi các giá trị số nguyên được phân tách nhau bởi ký tự ",". Ví dụ: 1,3,9,19,33,20  c. Tìm và gửi lên server giá trị lớn thứ hai cùng vị trí xuất hiện của nó trong chuỗi.Ví dụ: 20,5  d. Đóng kết nối và kết thúc chương trình.

---

## `TCP_CHARACTER` TCP - Character Stream
- Mã câu hỏi: `oaBOIwEF`
- Exam Server: `36.50.135.242`
### Nội dung
Một chương trình server cho phép kết nối qua giao thức TCP tại cổng 2208 (hỗ trợ thời gian giao tiếp tối đa cho mỗi yêu cầu là 5s). Yêu cầu là xây dựng một chương trình client tương tác với server sử dụng các luồng byte (BufferedWriter/BufferedReader) theo kịch bản sau:   a. Gửi một chuỗi gồm mã sinh viên và mã câu hỏi với định dạng "studentCode;qCode". Ví dụ: "B15DCCN999;BAA62945"  b. Nhận một chuỗi ngẫu nhiên từ server  Ví dụ: dgUOo ch2k22ldsOo  c. Liệt kê các ký tự (là chữ hoặc số) xuất hiện nhiều hơn một lần trong chuỗi và số lần xuất hiện của chúng và gửi lên server  Ví dụ: d:2,O:2,o:2,2:3,  d. Đóng kết nối và kết thúc chương trình.

---

## `TCP_DATA` TCP - Data Stream
- Mã câu hỏi: `CR3z42T9`
- Exam Server: `36.50.135.242`
### Nội dung
Một chương trình máy chủ cho phép kết nối qua TCP tại cổng 2207 (hỗ trợ thời gian liên lạc tối đa cho mỗi yêu cầu là 5s), yêu cầu xây dựng chương trình (tạm gọi là client) thực hiện kết nối tới server tại cổng 2207, sử dụng luồng byte dữ liệu (DataInputStream/DataOutputStream) để trao đổi thông tin theo thứ tự:   a. Gửi chuỗi là mã sinh viên và mã câu hỏi theo định dạng "studentCode;qCode". Ví dụ: "B15DCCN999;1D25ED92"  b. Nhận lần lượt hai số nguyên a và b từ server  c. Thực hiện tính toán tổng, tích và gửi lần lượt từng giá trị theo đúng thứ tự trên lên server  d. Đóng kết nối và kết thúc

---

## `UDP_DATA` UDP - Data Type
- Mã câu hỏi: `toft6ekh`
- Exam Server: `36.50.135.242`
### Nội dung
Một chương trình server cho phép giao tiếp qua giao thức UDP tại cổng 2207. Yêu cầu là xây dựng một chương trình client trao đổi thông tin với server theo kịch bản:  a. Gửi thông điệp là một chuỗi chứa mã sinh viên và mã câu hỏi theo định dạng “;studentCode;qCode”. Ví dụ: “;B15DCCN001;73457A17”  b. Nhận thông điệp là một chuỗi từ server theo định dạng “requestId;n;A1,A2,...An” , với  - requestId là chuỗi ngẫu nhiên duy nhất  - n là một số ngẫu nhiên nhỏ hơn 100.  -            A1, A2 ... Am (m <= n) là các giá trị ngẫu nhiên nhỏ hơn hoặc bằng n và có thể trùng nhau.  Ex: requestId;10;2,3,5,6,5  c. Tìm kiếm các giá trị còn thiếu và gửi lên server theo định dạng “requestId;B1,B2,...,Bm”  Ex: requestId;1,4,7,8,9,10  d. Đóng socket và kết thúc chương trình.

---

## `UDP_STRING` UDP - String
- Mã câu hỏi: `0qGfT6B4`
- Exam Server: `36.50.135.242`
### Nội dung
Một chương trình server cho phép kết nối qua giao thức UDP tại cổng 2208. Yêu cầu là xây dựng một chương trình client tương tác với server kịch bản dưới đây:  a. Gửi thông điệp là một chuỗi chứa mã sinh viên và mã câu hỏi theo định dạng “;studentCode;qCode”. Ví dụ: “;B15DCCN001;EE29C059”  b. Nhận thông điệp từ server theo định dạng “requestId; data”   - requestId là một chuỗi ngẫu nhiên duy nhất  - data là chuỗi dữ liệu đầu vào cần xử lý  Ex: “requestId;Qnc8d5x78aldSGWWmaAAjyg3”  c. Tìm kiếm ký tự xuất hiện nhiều nhất trong chuỗi và gửi lên server theo định dạng “requestId;ký tự xuất hiện nhiều nhất: các vị trí xuất hiện ký tự đó”   ví dụ: “requestId;8:4,9,”  d. Đóng socket và kết thúc chương trình

---

## `TCP_DATA` TCP - Data Stream
- Mã câu hỏi: `1H9rZUmX`
- Exam Server: `36.50.135.242`
### Nội dung
Mật mã caesar, còn gọi là mật mã dịch chuyển, để giải mã thì mỗi ký tự nhận được sẽ được thay thế bằng một ký tự cách nó một đoạn s. Ví dụ: với s = 3 thì ký tự “A” sẽ được thay thế bằng ký tự “D”.  Một chương trình server cho phép kết nối qua giao thức TCP tại cổng 2207 (hỗ trợ thời gian giao tiếp tối đa cho mỗi yêu cầu là 5s). Yêu cầu là xây dựng chương trình client tương tác với server trên, sử dụng các luồng byte (DataInputStream/DataOutputStream) để trao đổi thông tin theo thứ tự:  a. Gửi một chuỗi gồm mã sinh viên và mã câu hỏi theo định dạng "studentCode;qCode". Ví dụ: "B15DCCN999;D68C93F7"  b. Nhận lần lượt chuỗi đã bị mã hóa caesar và giá trị dịch chuyển s nguyên  c. Thực hiện giải mã ra thông điệp ban đầu và gửi lên Server  d. Đóng kết nối và kết thúc chương trình.

---

## `TCP_OBJECT` TCP - Object Stream
- Mã câu hỏi: `Ak9J0e5D`
- Exam Server: `36.50.135.242`
### Nội dung
Thông tin sản phẩm vì một lý do nào đó đã bị sửa đổi thành không đúng, cụ thể:  a) Tên sản phẩm bị đổi ngược từ đầu tiên và từ cuối cùng, ví dụ: “lenovo thinkpad T520” bị chuyển thành “T520 thinkpad lenovo”  b) Số lượng sản phẩm cũng bị đảo ngược giá trị, ví dụ từ 9981 thành 1899    Một chương trình server cho phép kết nối qua giao thức TCP tại cổng 2209 (hỗ trợ thời gian giao tiếp tối đa cho mỗi yêu cầu là 5s). Yêu cầu là xây dựng một chương trình client tương tác với server sử dụng các luồng đối tượng (ObjectInputStream / ObjectOutputStream) để gửi/nhận và sửa các thông tin bị sai của sản phẩm. Chi tiết dưới đây:  a) Đối tượng trao đổi là thể hiện của lớp Laptop được mô tả như sau        • Tên đầy đủ của lớp: TCP.Laptop        • Các thuộc tính: id int, code String, name String, quantity int        • Hàm khởi tạo đầy đủ các thuộc tính được liệt kê ở trên        • Trường dữ liệu: private static final long serialVersionUID = 20150711L;   b) Tương tác với server theo kịch bản  1) Gửi đối tượng là chuỗi chứa mã sinh viên và mã câu hỏi với định dạng "studentCode;qCode". Ví dụ: "B15DCCN999;5AD2B818"  2) Nhận một đối tượng là thể hiện của lớp Laptop từ server  3) Sửa các thông tin sai của sản phẩm về tên và số lượng.  Gửi đối tượng vừa được sửa sai lên server  4) Đóng socket và kết thúc chương trình.

---

## `TCP_OBJECT` TCP - Object Stream
- Mã câu hỏi: `AjfSNHkA`
- Exam Server: `36.50.135.242`
### Nội dung
Thông tin khách hàng cần thay đổi định dạng lại cho phù hợp với khu vực, cụ thể:  a. Tên khách hàng cần được chuẩn hóa theo định dạng mới. Ví dụ: nguyen van hai duong -> DUONG, Nguyen Van Hai  b. Ngày sinh của khách hàng hiện đang ở dạng mm-dd-yyyy, cần được chuyển thành định dạng dd/mm/yyyy. Ví dụ: 10-11-2012 -> 11/10/2012  c. Tài khoản khách hàng là các chữ cái in thường được sinh tự động từ họ tên khách hàng. Ví dụ: nguyen van hai duong -> nvhduong    Một chương trình server cho phép kết nối qua giao thức TCP tại cổng 2209 (hỗ trợ thời gian giao tiếp tối đa cho mỗi yêu cầu là 5s). Yêu cầu là xây dựng một chương trình client tương tác với server sử dụng các luồng đối tượng (ObjectInputStream / ObjectOutputStream) thực hiện gửi/nhận đối tượng khách hàng và chuẩn hóa. Cụ thể:  a. Đối tượng trao đổi là thể hiện của lớp Customer được mô tả như sau        • Tên đầy đủ của lớp: TCP.Customer        • Các thuộc tính: id int, code String, name String, dayOfBirth String, userName String        • Hàm khởi tạo đầy đủ các thuộc tính được liệt kê ở trên        • Trường dữ liệu: private static final long serialVersionUID = 20170711L;   b. Tương tác với server theo kịch bản dưới đây:   1) Gửi đối tượng là một chuỗi gồm mã sinh viên và mã câu hỏi ở định dạng "studentCode;qCode". Ví dụ: "B15DCCN999;F2DA54F3"   2) Nhận một đối tượng là thể hiện của lớp Customer từ server với các thông tin đã được thiết lập   3) Thay đổi định dạng theo các yêu cầu ở trên và gán vào các thuộc tính tương ứng.  Gửi đối tượng đã được sửa đổi lên server   4) Đóng socket và kết thúc chương trình.

---

## `UDP_DATA` UDP - Data Type
- Mã câu hỏi: `cJpJP4lt`
- Exam Server: `36.50.135.242`
### Nội dung
<p>Một chương trình server cho phép giao tiếp qua giao thức UDP tại cổng 2207. Yêu cầu là xây dựng một chương trình client trao đổi thông tin với server theo kịch bản: a. Gửi thông điệp là một chuỗi chứa mã sinh viên và mã câu hỏi theo định dạng “;studentCode;qCode”. Ví dụ: “;B15DCCN001;DC73CA2E” b. Nhận thông điệp là một chuỗi từ server theo định dạng “requestId;a1,a2,...,a50” - requestId là chuỗi ngẫu nhiên duy nhất - a1 -&gt; a50 là 50 số nguyên ngẫu nhiên c. Thực hiện tìm giá trị lớn nhất và giá trị nhỏ nhất thông điệp trong a1 -&gt; a50 và gửi thông điệp lên lên server theo định dạng “requestId;max,min” d. Đóng socket và kết thúc chương trình</p>

---

## `UDP_STRING` UDP - String
- Mã câu hỏi: `EkI693uw`
- Exam Server: `36.50.135.242`
### Nội dung
<p>Một chương trình server cho phép kết nối qua giao thức UDP tại cổng 2208. Yêu cầu là xây dựng một chương trình client trao đổi thông tin với server theo kịch bản dưới đây: a. Gửi thông điệp là một chuỗi chứa mã sinh viên và mã câu hỏi theo định dạng ";studentCode;qCode". Ví dụ: ";B15DCCN001;5B35BCC1" b. Nhận thông điệp từ server theo định dạng "requestId;data" - requestId là một chuỗi ngẫu nhiên duy nhất - data là chuỗi dữ liệu cần xử lý c. Xử lý chuẩn hóa chuỗi đã nhận thành theo nguyên tắc i. Ký tự đầu tiên của từng từ trong chuỗi là in hoa ii. Các ký tự còn lại của chuỗi là in thường Gửi thông điệp chứa chuỗi đã được chuẩn hóa lên server theo định dạng "requestId;data" d. Đóng socket và kết thúc chương trình</p>

---

## `UDP_OBJECT` UDP - Object
- Mã câu hỏi: `UN9ZNrMb`
- Exam Server: `36.50.135.242`
### Nội dung
<p>Một chương trình server cho phép giao tiếp qua giao thức UDP tại cổng 2209. Yêu cầu là xây dựng một chương trình client trao đổi thông tin với server theo kịch bản sau: Đối tượng trao đổi là thể hiện của lớp UDP.Student được mô tả: • Tên đầy đủ lớp: UDP.Student • Các thuộc tính: id String,code String, name String, email String • 02 Hàm khởi tạo: o public Student(String id, String code, String name, String email) o public Student(String code) • Trường dữ liệu: private static final long serialVersionUID = 20171107 Thực hiện: • Gửi thông điệp là một chuỗi chứa mã sinh viên và mã câu hỏi theo định dạng “;studentCode;qCode”. Ví dụ: “;B15DCCN001;EE29C059” b. Nhận thông điệp chứa: 08 byte đầu chứa chuỗi requestId, các byte còn lại chứa một đối tượng là thể hiện của lớp Student từ server. Trong đó, các thông tin được thiết lập gồm id và name. c. Yêu cầu: - Chuẩn hóa tên theo quy tắc: Chữ cái đầu tiên in hoa, các chữ cái còn lại in thường và gán lại thuộc tính name của đối tượng - Tạo email ptit.edu.vn từ tên người dùng bằng cách lấy tên và các chữ cái bắt đầu của họ và tên đệm. Ví dụ: nguyen van tuan nam -&gt; namnvt@ptit.edu.vn. Gán giá trị này cho thuộc tính email của đối tượng nhận được - Gửi thông điệp chứa đối tượng xử lý ở bước c lên Server với cấu trúc: 08 byte đầu chứa chuỗi requestId và các byte còn lại chứa đối tượng Student đã được sửa đổi. d. Đóng socket và kết thúc chương trình.</p>

---

## `UDP_OBJECT` UDP - Object
- Mã câu hỏi: `xcFNQUI4`
- Exam Server: `36.50.135.242`
### Nội dung
<p>Thông tin khách hàng được yêu cầu thay đổi định dạng lại cho phù hợp với khu vực, cụ thể: a. Tên khách hàng cần được chuẩn hóa theo định dạng mới. Ví dụ: nguyen van hai duong -&gt; DUONG, Nguyen Van Hai b. Ngày sinh của khách hàng đang ở dạng mm-dd-yyyy, cần được chuyển thành định dạng dd/mm/yyyy. Ví dụ: 10-11-2012 -&gt; 11/10/2012 c. Tài khoản khách hàng được tạo từ các chữ cái in thường được sinh tự động từ họ tên khách hàng. Ví dụ: nguyen van hai duong -&gt; nvhduong Một chương trình server cho phép giao tiếp qua giao thức UDP tại cổng 2209. Yêu cầu là xây dựng một chương trình client giao tiếp với server theo mô tả sau: a. Đối tượng trao đổi là thể hiện của lớp UDP.Customer được mô tả như sau • Tên đầy đủ của lớp: UDP.Customer • Các thuộc tính: id String, code String, name String, , dayOfBirth String, userName String • Một Hàm khởi tạo với đầy đủ các thuộc tính được liệt kê ở trên • Trường dữ liệu: private static final long serialVersionUID = 20151107; b. Client giao tiếp với server theo các bước • Gửi thông điệp là một chuỗi chứa mã sinh viên và mã câu hỏi theo định dạng “;studentCode;qCode”. Ví dụ: “;B15DCCN001;EE29C059” • Nhận thông điệp chứa: 08 byte đầu chứa chuỗi requestId, các byte còn lại chứa một đối tượng là thể hiện của lớp Customer từ server. Trong đó, các thuộc tính id, code, name,dayOfBirth đã được thiết lập sẵn. • Yêu cầu thay đổi thông tin các thuộc tính như yêu cầu ở trên và gửi lại đối tượng khách hàng đã được sửa đổi lên server với cấu trúc: 08 byte đầu chứa chuỗi requestId và các byte còn lại chứa đối tượng Customer đã được sửa đổi. • Đóng socket và kết thúc chương trình.</p>

---

## `WS_DATA` WS - DataService
- Mã câu hỏi: `VU9y8T9o`
- Exam Server: `36.50.135.242`
### Nội dung
Một dịch vụ web (hỗ trợ SOAP version 1.1) được định nghĩa và mô tả trong tệp DataService?wsdl, được triển khai trên server tại URL http://<Exam_IP>:2221/DataService?wsdl để xử lý các bài toán với dữ liệu nguyên thủy.
Yêu cầu: Viết chương trình tại máy trạm (WS client) để giao tiếp với DataService thực hiện các công việc sau:
a. Triệu gọi phương thức getData với tham số đầu vào là mã sinh viên (studentCode) và mã câu hỏi (qCode) để nhận về một danh sách số nguyên (List<Integer>) từ server.
Ví dụ: 7602,9136,1090,34319,7830,6179,10584,20166,28199,30250,32179,22544,3222,10320,30590,19279
b. Thực hiện tìm số lớn nhất có thể tạo dược từ a,b,c,d...
c. Triệu gọi phương thức submitDataString(String studentCode, String qCode, String data) để gửi kết quả tổng đã tính được trở lại server.
Ví dụ: 91367830760261793431932223217930590302502819922544201661927910901058410320
d. Kết thúc chương trình client.

---

## `RMI_BYTE` RMI - Byte
- Mã câu hỏi: `c4epJ349`
- Exam Server: `36.50.135.242`
### Nội dung
Một chương trình (tạm gọi là RMI Server) cung cấp giao diện cho phép triệu gọi từ xa để xử lý dữ liệu nhị phân.  Giao diện từ xa:  public interface ByteService extends Remote {  public byte[] requestData(String studentCode, String qCode) throws RemoteException;  public void submitData(String studentCode, String qCode, byte[] data) throws RemoteException;  }  Trong đó:  • Interface ByteService được viết trong package RMI.  Đối tượng cài đặt giao diện từ xa ByteService được đăng ký với RegistryServer với tên là: RMIByteService.  Yêu cầu: Viết chương trình tại máy trạm (RMI client) để thực hiện các công việc sau với dữ liệu nhị phân nhận được từ RMI Server:  a. Triệu gọi phương thức requestData để nhận một mảng dữ liệu nhị phân (byte[]) từ server.  b. Tìm phần tử có số lần xuất hiện ít nhất trong mảng, nếu có nhiều phần tử có cùng số lần xuất hiện ít nhất, chỉ cần trả về phần tử đầu tiên xuất hiện trong các phần tử đó  Ví dụ: Nếu mảng dữ liệu nhận được là [1, 2, 3, 2, 1], chương trình sẽ tìm ra phần tử xuất hiện ít nhất là 3.  c. Triệu gọi phương thức submitData để gửi mảng byte kết quả chứa phẩn tử có số lần xuất hiện ít nhất và số lần xuất hiện trở lại server.  d. Kết thúc chương trình client.

---

## `RMI_BYTE` RMI - Byte
- Mã câu hỏi: `nEUEhw46`
- Exam Server: `36.50.135.242`
### Nội dung
Một chương trình (tạm gọi là RMI Server) cung cấp giao diện cho phép triệu gọi từ xa để xử lý dữ liệu nhị phân.  Giao diện từ xa:  public interface ByteService extends Remote {  public byte[] requestData(String studentCode, String qCode) throws RemoteException;  public void submitData(String studentCode, String qCode, byte[] data) throws RemoteException;  }  Trong đó:  • Interface ByteService được viết trong package RMI.  Đối tượng cài đặt giao diện từ xa ByteService được đăng ký với RegistryServer với tên là: RMIByteService.  Yêu cầu: Viết chương trình tại máy trạm (RMI client) để thực hiện các công việc sau với dữ liệu nhị phân nhận được từ RMI Server:  a. Triệu gọi phương thức requestData để nhận một mảng dữ liệu nhị phân (byte[]) từ server.  b. Tìm phần tử xuất hiện nhiều nhất trong mảng byte[]. Nếu có nhiều phần tử có cùng số lần xuất hiện cao nhất, chỉ cần trả về phần tử đầu tiên xuất hiện trong các phần tử đó.  Ví dụ: Nếu mảng dữ liệu nhận được là [1, 2, 3, 2, 1, 2], phần tử xuất hiện nhiều nhất là 2, với tần suất xuất hiện 3 lần.  c. Triệu gọi phương thức submitData để gửi mảng byte chứa phần tử phổ biến nhất, cùng với tần suất xuất hiện của nó trở lại server.  d. Kết thúc chương trình client

---

## `RMI_CHARACTER` RMI - Character
- Mã câu hỏi: `B9djTG98`
- Exam Server: `36.50.135.242`
### Nội dung
Một chương trình (tạm gọi là RMI Server) cung cấp giao diện cho phép triệu gọi từ xa để xử lý chuỗi.  Giao diện từ xa:  public interface CharacterService extends Remote {  public String requestCharacter(String studentCode, String qCode) throws RemoteException;  public void submitCharacter(String studentCode, String qCode, String strSubmit) throws RemoteException;  }  Trong đó:  • Interface CharacterService được viết trong package RMI.  • Đối tượng cài đặt giao diện từ xa CharacterService được đăng ký với RegistryServer với tên là: RMICharacterService.  Yêu cầu: Viết chương trình tại máy trạm (RMI client) để thực hiện các công việc sau với chuỗi được nhận từ RMI Server:  a. Triệu gọi phương thức requestCharacter để nhận chuỗi ngẫu nhiên từ server với định dạng: "Chuỗi đầu vào".  b. Thực hiện thao tác mã hóa URL (URL Encoding) cho chuỗi đầu vào nhận được từ server. Mã hóa URL chuyển đổi các ký tự đặc biệt thành định dạng URL an toàn bằng cách thay thế các ký tự đó bằng ký hiệu phần trăm (%) và mã ASCII của chúng.  Ví dụ: Chuỗi ban đầu "Hello World!" -> Chuỗi mã hóa URL là: "Hello%20World%21"  c. Triệu gọi phương thức submitCharacter để gửi chuỗi đã được mã hóa trở lại server.  d. Kết thúc chương trình client.

---

## `RMI_CHARACTER` RMI - Character
- Mã câu hỏi: `wWlXqfMz`
- Exam Server: `36.50.135.242`
### Nội dung
Một chương trình (tạm gọi là RMI Server) cung cấp giao diện cho phép triệu gọi từ xa để xử lý chuỗi.  Giao diện từ xa:  public interface CharacterService extends Remote {  public String requestCharacter(String studentCode, String qCode) throws RemoteException;  public void submitCharacter(String studentCode, String qCode, String strSubmit) throws RemoteException;  }  Trong đó:  • Interface CharacterService được viết trong package RMI.  • Đối tượng cài đặt giao diện từ xa CharacterService được đăng ký với RegistryServer với tên là: RMICharacterService.  Yêu cầu: Viết chương trình tại máy trạm (RMI client) để thực hiện các công việc sau với chuỗi được nhận từ RMI Server:  a. Triệu gọi phương thức requestCharacter để nhận chuỗi ngẫu nhiên từ server với định dạng: "Số thập phân đầu vào".  b. Thực hiện chuyển đổi số thập phân nhận được thành chuỗi số La Mã (Roman).  Quy tắc chuyển đổi:      Các ký tự La Mã chính bao gồm: I=1, V=5, X=10, L=50, C=100, D=500, M=1000.      Ví dụ: 58 -> "LVIII".  c. Triệu gọi phương thức submitCharacter để gửi chuỗi số La Mã đã chuyển đổi trở lại server.  d. Kết thúc chương trình client.

---

## `WS_DATA` WS - DataService
- Mã câu hỏi: `Wve7GCTx`
- Exam Server: `36.50.135.242`
### Nội dung
Một dịch vụ web (hỗ trợ SOAP version 1.1) được định nghĩa và mô tả trong tệp DataService?wsdl, được triển khai trên server tại URL http://<Exam_IP>:2221/DataService?wsdl để xử lý các bài toán với dữ liệu nguyên thủy.
Yêu cầu: Viết chương trình tại máy trạm (WS client) để giao tiếp với DataService thực hiện các công việc sau:
a. Triệu gọi phương thức getData với tham số đầu vào là mã sinh viên (studentCode) và mã câu hỏi (qCode) để nhận về một danh sách số nguyên (List<Integer>) từ server.
b. Thực hiện tính toán tổng của tất cả các phần tử trong danh sách số nguyên nhận được.
c. Triệu gọi phương thức submitDataInt(String studentCode, String qCode, int data) để gửi kết quả tổng đã tính được trở lại server.
Ví dụ: Nếu mảng số nguyên nhận được từ phương thức getData là [1, 2, 3, 4, 5], chương trình client sẽ tính tổng là 15 và gửi kết quả này trở lại server qua phương thức submitData
d. Kết thúc chương trình client.

---

## `WS_CHARACTER` WS - CharacterService
- Mã câu hỏi: `tvRP4LWy`
- Exam Server: `36.50.135.242`
### Nội dung
Một dịch vụ web (hỗ trợ SOAP version 1.1) được định nghĩa và mô tả trong tệp CharacterService.wsdl, được triển khai trên server tại URL http://<Exam_IP>:2221/CharacterService?wsdl để xử lý các bài toán về chuỗi và ký tự.
Yêu cầu: Viết chương trình tại máy trạm (WS client) để giao tiếp với CharacterService thực hiện các công việc sau:
a. Triệu gọi phương thức requestCharacter với tham số đầu vào là mã sinh viên (studentCode) và mã câu hỏi (qCode) để nhận về một danh sách ký tự (List<Integer>) từ server.
b. Thực hiện xoay vòng các ký tự trong danh sách theo chiều phải, số lần xoay vòng bằng đúng giá trị nguyên trong bảng mã ASCII của ký tự đầu tiên.
c. Triệu gọi phương thức submitCharacterCharArray(String studentCode, String qCode, List<Integer> data) để gửi mảng ký tự đã xoay vòng trở lại server.
Ví dụ: Nếu mảng ký tự nhận được từ phương thức requestCharacter là ['a', 'b', 'c', 'd'], giá trị nguyên của ký tự 'a' trong bảng mã ASCII là 97, thực hiện xoay vòng phải 97 lần sẽ trả lại mảng ['d', 'a', 'b', 'c']. Mảng này sẽ được gửi lại server qua phương thức submitCharacterCharArray.
d. Kết thúc chương trình client.

---

## `WS_CHARACTER` WS - CharacterService
- Mã câu hỏi: `RoIwRzSu`
- Exam Server: `36.50.135.242`
### Nội dung
Một dịch vụ web (hỗ trợ SOAP version 1.1) được định nghĩa và mô tả trong tệp CharacterService.wsdl, được triển khai trên server tại URL http://<Exam_IP>:2221/CharacterService?wsdl để xử lý các bài toán về chuỗi và ký tự.
Yêu cầu: Viết chương trình tại máy trạm (WS client) để giao tiếp với CharacterService thực hiện các công việc sau:
a. Triệu gọi phương thức requestStringArray với tham số đầu vào là mã sinh viên (studentCode) và mã câu hỏi (qCode) để nhận về một danh sách chuỗi (List<String>) từ server.
b. Phân loại các từ trong mảng chuỗi thành các nhóm có cùng số lượng nguyên âm. Tạo một chuỗi cho mỗi nhóm, trong đó liệt kê các từ cách nhau bằng dấu phẩy, và sắp xếp các từ theo thứ tự từ điển trong mỗi nhóm.
c. Triệu gọi phương thức submitCharacterStringArray(String studentCode, String qCode, List<String> data) để gửi danh sách chuỗi kết quả trở lại server, trong đó mỗi phần tử là một nhóm từ với cùng số lượng nguyên âm.
Ví dụ: Nếu danh sách chuỗi nhận được từ phương thức requestCharacter là ["apple", "banana", "pear", "grape", "kiwi"], các nhóm có thể là:
• Nhóm 2 nguyên âm: "apple, banana"
• Nhóm 1 nguyên âm: "grape, kiwi, pear"  Danh sách kết quả sẽ là ["apple, banana", "grape, kiwi, pear"], và danh sách này sẽ được gửi lại server qua phương thức submitCharacter.
d. Kết thúc chương trình client.

---

## `WS_OBJECT` WS - ObjectService
- Mã câu hỏi: `vQhpNPxe`
- Exam Server: `36.50.135.242`
### Nội dung
Một dịch vụ web (hỗ trợ SOAP version 1.1) được định nghĩa và mô tả trong tệp ObjectService.wsdl, được triển khai trên server tại URL http://<Exam_IP>:2221/ObjectService?wsdl để xử lý các bài toán với đối tượng.
Yêu cầu: Viết chương trình tại máy trạm (WS client) để giao tiếp với ObjectService thực hiện các công việc sau:
a. Triệu gọi phương thức requestListEmployeeY với tham số đầu vào là mã sinh viên (studentCode) và mã câu hỏi (qCode) để nhận về một danh sách đối tượng EmployeeY từ server. Mỗi đối tượng EmployeeY có các thuộc tính:
• name: kiểu String, đại diện cho tên của nhân viên.
• startDate: kiểu Date, đại diện cho ngày bắt đầu làm việc của nhân viên.
b. Sắp xếp danh sách EmployeeY theo thứ tự thâm niên từ cao đến thấp (người có ngày bắt đầu làm việc sớm nhất sẽ đứng đầu danh sách).      Nếu hai nhân viên có cùng ngày bắt đầu làm việc, giữ nguyên thứ tự ban đầu của họ trong danh sách.
c. Triệu gọi phương thức submitListEmployeeY(String studentCode, String qCode, List<EmployeeY> data) để gửi danh sách nhân viên đã sắp xếp trở lại server.
d. Kết thúc chương trình client.

---

## `WS_OBJECT` WS - ObjectService
- Mã câu hỏi: `vv4p7N32`
- Exam Server: `36.50.135.242`
### Nội dung
Một dịch vụ web (hỗ trợ SOAP version 1.1) được định nghĩa và mô tả trong tệp ObjectService.wsdl, được triển khai trên server tại URL http://<Exam_IP>:2221/ObjectService?wsdl để xử lý các bài toán với đối tượng.
Yêu cầu: Viết chương trình tại máy trạm (WS client) để giao tiếp với ObjectService thực hiện các công việc sau:
a. Triệu gọi phương thức requestListCustomer với tham số đầu vào là mã sinh viên (studentCode) và mã câu hỏi (qCode) để nhận về danh sách đối tượng Customer từ server. Mỗi đối tượng Customer có các thuộc tính:
• customerId: kiểu String, đại diện cho mã khách hàng.
• location: kiểu String, đại diện cho địa điểm của khách hàng.
• purchaseCount: kiểu int, đại diện cho số lần mua hàng của khách hàng.
• totalSpent: kiểu float, đại diện cho tổng số tiền đã chi tiêu của khách hàng.
b. Lọc và giữ lại các khách hàng có totalSpent lớn hơn 5000 và có purchaseCount từ 5 trở lên.
c. Triệu gọi phương thức submitListCustomer(String studentCode, String qCode, List<Customer> customers) để gửi danh sách các khách hàng tiềm năng trở lại server.
d. Kết thúc chương trình client.

---

## `TCP_GZIP` TCP - GZIP Stream
- Mã câu hỏi: `NdhlLPZd`
- Exam Server: `36.50.135.242`
### Nội dung
Một chương trình server cho phép kết nối qua giao thức TCP tại cổng 2210 (thời gian giao tiếp tối đa cho mỗi yêu cầu là 5s). Yêu cầu là xây dựng một chương trình client tương tác tới server ở trên sử dụng GZIPInputStream/GZIPOutputStream để trao đổi thông tin (mỗi thông điệp là một dòng text UTF-8 kết thúc bằng ‘\n’ và toàn bộ dữ liệu truyền/nhận đều được nén GZIP), theo thứ tự sau:    a. Gửi mã sinh viên và mã câu hỏi theo định dạng "studentCode;qCode".  Ví dụ: "B16DCCN999;GZLEN01"    b. Nhận dữ liệu từ server, sau khi giải nén là một chuỗi văn bản.    c. Thực hiện đảo ngược chuỗi nhận được, sau đó mã hóa chuỗi đã đảo ngược sang định dạng Base64. Gửi kết quả lên server theo khuôn dạng: <reversed_string>|<base64_string> Ví dụ: Nhận "123" → Đảo ngược thành "321" → Base64 của "321" là "MzIx" → Gửi lên: "321|MzIx"    d. Đóng kết nối và kết thúc chương trình.

---

## `TCP_GZIP` TCP - GZIP Stream
- Mã câu hỏi: `UrLXNu5H`
- Exam Server: `36.50.135.242`
### Nội dung
Một chương trình server cho phép kết nối qua giao thức TCP tại cổng 2210 (thời gian giao tiếp tối đa cho mỗi yêu cầu là 5s). Yêu cầu là xây dựng một chương trình client tương tác tới server ở trên sử dụng GZIPInputStream/GZIPOutputStream để trao đổi thông tin (mỗi thông điệp là một dòng text UTF-8 kết thúc bằng ‘\n’ và toàn bộ dữ liệu truyền/nhận đều được nén GZIP), theo thứ tự sau:    a. Gửi mã sinh viên và mã câu hỏi theo định dạng "studentCode;qCode".  Ví dụ: "B16DCCN999;GZCRC_LEN03"    b. Nhận dữ liệu từ server, sau khi giải nén là một chuỗi văn bản.    c. Sắp xếp các ký tự trong chuỗi nhận được theo thứ tự từ điển (tăng dần theo mã ASCII). Sau đó gửi chuỗi kết quả đã sắp xếp lên server.  Ví dụ: Nhận về "dbca1" thì gửi lên server "1abcd"    d. Đóng kết nối và kết thúc chương trình.

---

## `TCP_NIO` TCP - NIO Stream
- Mã câu hỏi: `de5khSZV`
- Exam Server: `36.50.135.242`
### Nội dung
Một chương trình server cho phép kết nối qua giao thức TCP tại cổng 2211 (thời gian giao tiếp tối đa cho mỗi yêu cầu là 5s). Yêu cầu là xây dựng một chương trình client tương tác tới server ở trên sử dụng SocketChannel và ByteBuffer để trao đổi thông tin theo giao thức frame: 4 byte độ dài (int32) + payload (UTF-8). Lưu ý: server & client đều phải đọc đủ dữ liệu bằng vòng lặp (readFully) do server luôn chia nhỏ dữ liệu khi gửi. Trình tự trao đổi như sau:  a. Gửi mã sinh viên và mã câu hỏi theo định dạng "studentCode;qCode". Ví dụ: "B16DCCN999;fkdRJYuX"  b. Nhận dữ liệu từ server gồm đúng 3 frame liên tiếp. Payload của mỗi frame là một phần của cùng một HTTP request, client phải nối 3 payload theo đúng thứ tự để thu được chuỗi HTTP request hoàn chỉnh (các dòng phân tách bởi "\r\n" và kết thúc bằng "\r\n\r\n").  c. Từ chuỗi HTTP request hoàn chỉnh, trích xuất và gửi lại lên server theo định dạng "METHOD;PATH;HOST" trong đó PATH luôn bao gồm query-string.  d. Đóng kết nối và kết thúc chương trình.

---

## `TCP_NIO` TCP - NIO Stream
- Mã câu hỏi: `kEKWsBOl`
- Exam Server: `36.50.135.242`
### Nội dung
Một chương trình server cho phép kết nối qua giao thức TCP tại cổng 2211 (thời gian giao tiếp tối đa cho mỗi yêu cầu là 5s). Yêu cầu là xây dựng một chương trình client tương tác tới server ở trên sử dụng SocketChannel và ByteBuffer để trao đổi thông tin theo giao thức frame: 4 byte độ dài (int32) + payload (UTF-8). Lưu ý: server & client đều phải đọc đủ dữ liệu bằng vòng lặp (readFully) do server luôn chia nhỏ dữ liệu khi gửi. Trình tự trao đổi như sau:  a. Gửi mã sinh viên và mã câu hỏi theo định dạng "studentCode;qCode". Ví dụ: "B16DCCN999;ucpQ9zAh"  b. Nhận dữ liệu từ server gồm đúng 2 frame liên tiếp. Payload của mỗi frame là một phần của cùng một chuỗi JSON đơn giản trên một dòng (không xuống dòng). Client phải nối 2 payload theo đúng thứ tự để thu được chuỗi JSON hoàn chỉnh.  c. Trích xuất các trường "event", "user", "ok" và gửi lại lên server theo định dạng "event=<event>;user=<user>;ok=<0|1>" (true=1, false=0).  d. Đóng kết nối và kết thúc chương trình.

---

## `RMI_DATA` [RMI Data] Tìm vị trí đỉnh cục bộ
- Mã câu hỏi: `yXDW6AQR`
- Exam Server: `36.50.135.242`
### Nội dung
<div>
  <p>Một chương trình RMI Server cung cấp giao diện DataService trong package RMI, được đăng ký với RegistryServer bằng tên RMIDataService.</p>
  <h4>Yêu cầu</h4>
  <p>a. Sử dụng mã sinh viên và mã câu hỏi làm tham số khi gọi RMI. Ví dụ: <code>studentCode="B21DCCN001"</code>, <code>qCode="A1B2C3D4"</code>.</p>
  <p>b. Triệu gọi <code>requestData(studentCode, qCode)</code> để nhận một mảng số nguyên từ server. Ví dụ: <code>[3,8,5,10,7]</code>.</p>
  <p>c. Một phần tử là đỉnh cục bộ nếu lớn hơn phần tử liền kề bên trái và bên phải; phần tử đầu/cuối chỉ cần lớn hơn phần tử kề duy nhất. Trả về vị trí theo chỉ số bắt đầu từ 1.</p>
  <p>d. Triệu gọi <code>submitData(studentCode, qCode, data)</code> để gửi <code>List&lt;Integer&gt;</code> các vị trí đỉnh cục bộ. Ví dụ: <code>[2,4]</code>.</p>
  <p>e. Kết thúc chương trình client.</p>
</div>

---

## `RMI_DATA` [RMI Data] Thống kê số thực nâng cao
- Mã câu hỏi: `rHeX1Kod`
- Exam Server: `36.50.135.242`
### Nội dung
<div>
  <p>Một chương trình RMI Server cung cấp giao diện DataService trong package RMI, được đăng ký với RegistryServer bằng tên RMIDataService.</p>
  <h4>Yêu cầu</h4>
  <p>a. Sử dụng mã sinh viên và mã câu hỏi làm tham số khi gọi RMI. Ví dụ: <code>studentCode="B21DCCN001"</code>, <code>qCode="A1B2C3D4"</code>.</p>
  <p>b. Triệu gọi <code>requestData(studentCode, qCode)</code> để nhận chuỗi CSV các số thực. Ví dụ: <code>10.00,20.00,30.00,40.00</code>.</p>
  <p>c. Tính giá trị trung bình, độ lệch chuẩn trên toàn bộ dãy và phân vị 95 tại vị trí <code>ceil(n * 0.95) - 1</code> sau khi sắp xếp tăng dần.</p>
  <p>d. Triệu gọi <code>submitData(studentCode, qCode, data)</code> để gửi chuỗi <code>average=&lt;avg&gt;;stddev=&lt;stddev&gt;;p95=&lt;p95&gt;</code>, các số thực làm tròn 02 chữ số thập phân. Ví dụ: <code>average=25.00;stddev=11.18;p95=40.00</code>.</p>
  <p>e. Kết thúc chương trình client.</p>
</div>

---

## `RMI_OBJECT` [RMI Object] Phân tầng xử lý SLA ticket
- Mã câu hỏi: `xznpNIyq`
- Exam Server: `36.50.135.242`
### Nội dung
<div>
  <p>Một chương trình RMI Server cung cấp giao diện ObjectService trong package RMI, được đăng ký với RegistryServer bằng tên RMIObjectService.</p>
  <h4>Yêu cầu</h4>
  <p>a. Sử dụng mã sinh viên và mã câu hỏi làm tham số khi gọi RMI. Ví dụ: <code>studentCode="B21DCCN001"</code>, <code>qCode="5AD2B818"</code>.</p>
  <p>b. Triệu gọi <code>requestObject(studentCode, qCode)</code> để nhận đối tượng <code>RMI.TicketSla</code>. Ví dụ: <code>priority=HIGH;openedHoursAgo=10</code>.</p>
  <p>c. Thiết lập <code>breached</code> nếu <code>CRITICAL &gt; 2h</code>, <code>HIGH &gt; 8h</code>, <code>MEDIUM &gt; 24h</code>, hoặc <code>LOW &gt; 72h</code>. Nếu không vi phạm, đặt <code>action=MONITOR</code>; nếu vi phạm và priority là CRITICAL hoặc thời gian mở trên 96h, đặt <code>ESCALATE_L2</code>; các trường hợp vi phạm còn lại đặt <code>ESCALATE_L1</code>.</p>
  <p>d. Triệu gọi <code>submitObject(studentCode, qCode, object)</code> để gửi lại đối tượng đã cập nhật. Ví dụ: <code>breached=true;action=ESCALATE_L1</code>.</p>
  <p>e. Kết thúc chương trình client.</p>
</div>

---

## `SOAP_DATA` [SOAP Data] Đếm số chẵn và số lẻ
- Mã câu hỏi: `dkEZLFFv`
- Exam Server: `36.50.135.242`
### Nội dung
<div>
  <p>Một dịch vụ web hỗ trợ SOAP version 1.1 được định nghĩa trong DataService?wsdl và triển khai tại http://&lt;Exam_IP&gt;:2221/DataService?wsdl.</p>
  <h4>Yêu cầu</h4>
  <p>a. Sử dụng mã sinh viên và mã câu hỏi làm tham số khi gọi các phương thức SOAP. Ví dụ: studentCode=&quot;B15DCCN999&quot;, qCode=&quot;A1B2C3D4&quot;.</p>
  <p>b. Triệu gọi phương thức getData(studentCode, qCode) để nhận về một danh sách số nguyên List&lt;Integer&gt; từ server.</p>
  <p>c. Đếm số lượng phần tử chẵn và số lượng phần tử lẻ trong danh sách.</p>
  <p>d. Triệu gọi submitDataStringArray(studentCode, qCode, data) để gửi danh sách chuỗi gồm EVEN=&lt;n&gt; và ODD=&lt;m&gt; về server.</p>
  <p>e. Đóng kết nối hoặc kết thúc client sau khi nộp kết quả.</p>
  <p><strong>Ví dụ:</strong> nếu dữ liệu nhận được là <code>[652, 139, 822, 95, 755, 70, 809, 165, 580, 514, 921, 995, 97, 988, 666, 654]</code> thì dữ liệu nộp lại là <code>[EVEN=8, ODD=8]</code>.</p>
</div>

---

## `SOAP_CHARACTER` SOAP Character — Reverse a String
- Mã câu hỏi: `v2B9F0NV`
- Exam Server: `36.50.135.242`
### Nội dung
<p>Một dịch vụ SOAP <code>CharacterService</code> được triển khai trên server.</p>
<p><b>WSDL:</b> <code>http://&lt;Exam_IP&gt;:2221/CharacterService?wsdl</code></p>
<p>Yêu cầu: Viết chương trình Java (SOAP client) thực hiện các công việc sau:</p>
<ol>
  <li>
    <p>Tạo Web Service Client từ WSDL URL trên (dùng wsimport hoặc NetBeans/IntelliJ Web Service Client wizard).</p>
    <p>Gọi phương thức <code>requestString(studentCode, qCode)</code> với <code>qCode = "&lt;qCode trong đề bài&gt;"</code> để nhận về một chuỗi ký tự từ server.</p>
    <p><b>Ví dụ:</b> Server trả về <code>"HelloWorld"</code>.</p>
  </li>
  <li>
    <p><b>Đảo ngược</b> chuỗi ký tự nhận được.</p>
    <p><b>Ví dụ:</b> <code>"HelloWorld"</code> -&gt; <code>"dlroWolleH"</code>.</p>
  </li>
  <li>
    <p>Gọi phương thức <code>submitString(studentCode, qCode, reversedString)</code> để gửi kết quả trở lại server.</p>
    <p><b>Ví dụ:</b> <code>submitString("B21DCCN001", "&lt;qCode trong đề bài&gt;", "dlroWolleH")</code>.</p>
  </li>
  <li>
    <p>Kết thúc chương trình client. Server trả về status string (<code>"AC"</code> hoặc <code>"WA"</code>).</p>
  </li>
</ol>

---

## `SOAP_OBJECT` SOAP Object — Calculate Final Price
- Mã câu hỏi: `KchxMEtQ`
- Exam Server: `36.50.135.242`
### Nội dung
<p>Một dịch vụ SOAP <code>ObjectService</code> được triển khai trên server.</p>
<p><b>WSDL:</b> <code>http://&lt;Exam_IP&gt;:2221/ObjectService?wsdl</code></p>
<p>Yêu cầu: Viết chương trình Java (SOAP client) thực hiện các công việc sau:</p>
<ol>
  <li>
    <p>Tạo Web Service Client từ WSDL URL trên (dùng wsimport hoặc NetBeans/IntelliJ Web Service Client wizard).</p>
    <p>Gọi phương thức <code>requestProductY(studentCode, qCode)</code> với <code>qCode = "&lt;qCode trong đề bài&gt;"</code> để nhận về một đối tượng <code>ProductY</code> từ server, có các thuộc tính <code>name</code>, <code>price</code>, <code>taxRate</code>, <code>discount</code> và <code>finalPrice</code>.</p>
    <p><b>Ví dụ:</b> <code>ProductY{name="Laptop", price=1000.0, taxRate=10.0, discount=5.0, finalPrice=0.0}</code></p>
  </li>
  <li>
    <p>Tính giá cuối cùng theo công thức:</p>
    <pre>finalPrice = price * (1 + taxRate / 100) * (1 - discount / 100)</pre>
    <p><b>Ví dụ:</b> <code>price=1000, taxRate=10, discount=5</code> -&gt; <code>finalPrice = 1000 * 1.10 * 0.95 = 1045.0</code></p>
  </li>
  <li>
    <p>Gán <code>finalPrice</code> vào đối tượng <code>ProductY</code>, sau đó gọi <code>submitProductY(studentCode, qCode, productY)</code> để gửi trở lại server.</p>
    <p><b>Ví dụ:</b> <code>submitProductY("B21DCCN001", "&lt;qCode trong đề bài&gt;", updatedProductY)</code>.</p>
  </li>
  <li>
    <p>Kết thúc chương trình client. Server trả về status string (<code>"AC"</code> hoặc <code>"WA"</code>).</p>
  </li>
</ol>

---

## `SOAP_DATA` [SOAP Data] Đếm số nguyên tố và checksum
- Mã câu hỏi: `06hJh2Q1`
- Exam Server: `36.50.135.242`
### Nội dung
<div>
  <p>Một dịch vụ web hỗ trợ SOAP version 1.1 được định nghĩa trong DataService?wsdl và triển khai tại http://&lt;Exam_IP&gt;:2221/DataService?wsdl.</p>
  <h4>Yêu cầu</h4>
  <p>a. Sử dụng mã sinh viên và mã câu hỏi làm tham số khi gọi các phương thức SOAP. Ví dụ: <code>studentCode="B21DCCN001"</code>, <code>qCode="A1B2C3D4"</code>.</p>
  <p>b. Triệu gọi phương thức <code>getData(studentCode, qCode)</code> để nhận danh sách số nguyên <code>List&lt;Integer&gt;</code> từ server. Ví dụ: <code>[11,12,13,20]</code>.</p>
  <p>c. Đếm số nguyên tố trong danh sách và tính checksum theo công thức <code>sum((i + 1) * value[i]) mod 100000</code>, với i bắt đầu từ 0.</p>
  <p>d. Triệu gọi <code>submitDataString(studentCode, qCode, data)</code> để gửi chuỗi <code>primeCount=&lt;n&gt;;checksum=&lt;m&gt;</code>. Ví dụ: <code>primeCount=2;checksum=154</code>.</p>
  <p>e. Kết thúc chương trình client.</p>
</div>

---

## `SOAP_CHARACTER` [SOAP Character] Che và sắp xếp mảng log
- Mã câu hỏi: `SX3iqOut`
- Exam Server: `36.50.135.242`
### Nội dung
<div>
  <p>Một dịch vụ web hỗ trợ SOAP version 1.1 được định nghĩa trong CharacterService?wsdl và triển khai tại http://&lt;Exam_IP&gt;:2221/CharacterService?wsdl.</p>
  <h4>Yêu cầu</h4>
  <p>a. Sử dụng mã sinh viên và mã câu hỏi làm tham số khi gọi các phương thức SOAP. Ví dụ: <code>studentCode="B21DCCN001"</code>, <code>qCode="BAA62945"</code>.</p>
  <p>b. Triệu gọi phương thức <code>requestStringArray(studentCode, qCode)</code> để nhận danh sách chuỗi log <code>List&lt;String&gt;</code> từ server. Ví dụ một phần tử: <code>ERROR user=a email=a@example.com phone=0123456789 token=abc</code>.</p>
  <p>c. Che email, số điện thoại và token trong từng dòng, sau đó sắp xếp các dòng theo mức <code>ERROR</code>, <code>WARN</code>, <code>INFO</code>.</p>
  <p>d. Triệu gọi <code>submitStringArray(studentCode, qCode, data)</code> để gửi danh sách chuỗi đã xử lý. Ví dụ phần tử nộp lại: <code>ERROR user=a email=[EMAIL] phone=[PHONE] token=[TOKEN]</code>.</p>
  <p>e. Kết thúc chương trình client.</p>
</div>

---

## `SOAP_OBJECT` [SOAP Object] Lọc và sắp xếp khách hàng VIP
- Mã câu hỏi: `gZOiIVi5`
- Exam Server: `36.50.135.242`
### Nội dung
<div>
  <p>Một dịch vụ web hỗ trợ SOAP version 1.1 được định nghĩa trong ObjectService?wsdl và triển khai tại http://&lt;Exam_IP&gt;:2221/ObjectService?wsdl.</p>
  <h4>Yêu cầu</h4>
  <p>a. Sử dụng mã sinh viên và mã câu hỏi làm tham số khi gọi các phương thức SOAP. Ví dụ: <code>studentCode="B21DCCN001"</code>, <code>qCode="5AD2B818"</code>.</p>
  <p>b. Triệu gọi phương thức <code>requestListCustomer(studentCode, qCode)</code> để nhận danh sách đối tượng <code>Customer</code> từ server. Ví dụ một phần tử: <code>customerId=HC700;purchaseCount=8;totalSpent=9000</code>.</p>
  <p>c. Giữ lại khách hàng có <code>purchaseCount &gt;= 6</code> và <code>totalSpent &gt;= 4000</code>, sau đó sắp xếp giảm dần theo <code>totalSpent</code>; nếu bằng nhau thì sắp xếp tăng dần theo <code>customerId</code>.</p>
  <p>d. Triệu gọi <code>submitListCustomer(studentCode, qCode, data)</code> để gửi danh sách <code>Customer</code> đã lọc và sắp xếp. Ví dụ danh sách nộp lại bắt đầu bằng khách hàng có tổng chi tiêu cao nhất.</p>
  <p>e. Kết thúc chương trình client.</p>
</div>

