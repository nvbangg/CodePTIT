# Code Lập trình mạng PTIT

## TCP

### Cấu trúc chung:
```java
import java.net.Socket;

public class TCP {
    public static void main(String[] args) throws Exception {
        // 1. Khởi tạo Socket kết nối tới Server
        Socket socket = new Socket("36.50.135.242", 2001); // IP Server và Port theo đề bài
        
        // 2. Khởi tạo các luồng đọc/ghi tương ứng theo dạng đề
        // 3. Gửi "Mã sinh viên;Mã câu hỏi"
        // 4. Nhận dữ liệu từ Server
        // ! Cụ thể mẫu code phần 2, 3, 4 theo các dạng đề bên dưới

        // 5. Xử lý logic theo yêu cầu đề bài

        // 6. Gửi kết quả về Server

        // 7. Đóng kết nối
        socket.close();
    }
}
```

### 1. TCP Character Stream
```java
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
        BufferedReader br = new BufferedReader(new InputStreamReader(socket.getInputStream()));

        // Gửi mã SV; Mã câu hỏi (bắt buộc có \n để báo hết dòng và flush để đẩy đi ngay
        bw.write("B23DCCN067;jNEYbPud\n"); 
        bw.flush();

        // Nhận chuỗi từ Server (tự động đọc đến khi gặp \n)
        String str = br.readLine();
```

### 2. TCP Byte Stream
```java
        OutputStream os = socket.getOutputStream();
        InputStream is = socket.getInputStream();

        // Gửi mảng byte trực tiếp
        os.write("B23DCCN067;jNEYbPud".getBytes());

        // Nhận mảng byte từ Server
        byte[] buff = new byte[1024];
        int bytes = is.read(buff); // là số lượng byte thực tế nhận được
        String str = new String(buff, 0, bytes).trim();
```
- `read(buff)` ở đây là đọc dữ liệu từ mạng để đổ vào mảng buff.
- Nếu `write(buff)` thì sẽ là lấy dữ liệu từ buff để ghi ra đĩa/server

### 3. TCP Data Stream
```java
        DataOutputStream dos = new DataOutputStream(socket.getOutputStream());
        DataInputStream dis = new DataInputStream(socket.getInputStream());

        dos.writeUTF("B23DCCN067;jNEYbPud");
        dos.flush();

        // Nhận dữ liệu từ Server (tùy theo kiểu dữ liệu đề bài gửi về)
        int n = dis.readInt();
        String str = dis.readUTF();
```
- `writeUTF()` tự động gắn thêm 2 byte biểu diễn độ dài chuỗi vào phần đầu gói tin, phía nhận dùng `readUTF()` sẽ tự động đọc đúng độ dài chuỗi mà không cần ký tự xuống dòng \n. (Không thay thế được bằng \n mà buộc dùng UTF)
- ghi số nguyên sẽ là: `dos.writeInt(num)`

### 4. TCP Object Stream
```java
        // Khởi tạo OutputStream trước InputStream để tránh bị deadlock luồng Object
        ObjectOutputStream oos = new ObjectOutputStream(socket.getOutputStream());
        ObjectInputStream ois = new ObjectInputStream(socket.getInputStream());

        oos.writeObject("B23DCCN067;jNEYbPud");
        oos.flush();

        // Nhận đối tượng từ Server và ép kiểu về đúng Class của đề bài
        Student student = (Student) ois.readObject();
```
- Lớp đối tượng (ví dụ: `Student`, `Product`...) bắt buộc phải khai báo `implements Serializable`
- Bắt buộc tạo `ObjectOutputStream` trước `ObjectInputStream`: Khi `new ObjectInputStream`, Java sẽ chặn chương trình để đợi đọc header từ đối tác. Tạo `ObjectOutputStream` trước sẽ phát ngay header sang Server, tránh việc cả hai đầu cùng đứng chờ nhau gây treo ứng dụng (deadlock).

## UDP

### Cấu trúc chung:
```java
import java.net.DatagramSocket;
import java.net.InetAddress;

public class UDP {
    public static void main(String[] args) throws Exception {
        // 1. Khởi tạo Socket, IP, Port
        DatagramSocket socket = new DatagramSocket();
        InetAddress ip = InetAddress.getByName("36.50.135.242");
        int port = 2207;

        // 2. Gửi mã SV; Mã câu hỏi
        byte[] req = ";B23DCCN067;toft6ekh".getBytes();
        socket.send(new DatagramPacket(req, req.length, ip, port));

        // 3. Nhận gói tin từ Server về (Dùng chung cho cả 2 dạng)
        byte[] buff = new byte[2048]; // 2048 byte bao trọn cả chuỗi lẫn Object
        DatagramPacket dp = new DatagramPacket(buff, buff.length);
        socket.receive(dp);

        // --- BƯỚC 4, 5, 6: XỬ LÝ & TRẢ KẾT QUẢ THEO 2 DẠNG BÊN DƯỚI ---

        // 7. Đóng kết nối
        socket.close();
    }
}
```
### 1. UDP String / Data Type
```java
        // Trích xuất chuỗi từ dp đã nhận ở trên
        String s = new String(dp.getData(), 0, dp.getLength()).trim();

        // Xử lý logic...
        String res = "...";

        // Gửi kết quả về Server
        byte[] out = res.getBytes();
        socket.send(new DatagramPacket(out, out.length, ip, port));
```

### 2. UDP Object
```java
        // Đọc Object từ dp đã nhận ở trên
        ObjectInputStream ois = new ObjectInputStream(new ByteArrayInputStream(dp.getData(), 0, dp.getLength()));
        Student student = (Student) ois.readObject();

        // Xử lý logic trên student...

        // Gửi lại đối tượng về Server
        ByteArrayOutputStream baos = new ByteArrayOutputStream();
        ObjectOutputStream oos = new ObjectOutputStream(baos);
        oos.writeObject(student);
        oos.flush();

        byte[] out = baos.toByteArray();
        socket.send(new DatagramPacket(out, out.length, ip, port));
```