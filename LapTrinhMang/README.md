# Code Lập trình mạng PTIT

## TCP

### Cấu trúc chung:
```java
import java.io.*;
import java.net.*;

public class TCP {
    public static void main(String[] args) throws Exception {
        // 1. Khởi tạo Socket kết nối tới Server
        Socket socket = new Socket("36.50.135.242", 2001); // IP Server và Port theo đề bài
        
        // 2. Khởi tạo các luồng đọc/ghi tương ứng theo dạng đề
        // 3. Gửi "Mã sinh viên;Mã câu hỏi"
        // 4. Nhận dữ liệu từ Server
        // ! Cụ thể mẫu code phần 2, 3, 4 theo các dạng đề bên dưới

        // 5. Xử lý logic theo yêu cầu đề bài

        // 6. Gửi kết quả về Server (tương tự bước 3)

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
- Lớp đối tượng (ví dụ: `Student`, `Customer`...) bắt buộc phải có `implements Serializable` và nằm đúng package (ví dụ `package TCP;`) nếu đề bài chỉ định
- Bắt buộc tạo `ObjectOutputStream` trước `ObjectInputStream`: Khi `new ObjectInputStream`, Java sẽ chặn chương trình để đợi đọc header từ đối tác. Tạo `ObjectOutputStream` trước sẽ phát ngay header sang Server, tránh việc cả hai đầu cùng đứng chờ nhau gây treo ứng dụng (deadlock).

## UDP

### Cấu trúc chung:
```java
import java.io.*;
import java.net.*;

public class UDP {
    public static void main(String[] args) throws Exception {
        // 1. Khởi tạo Socket, IP, Port
        DatagramSocket socket = new DatagramSocket();
        InetAddress ip = InetAddress.getByName("36.50.135.242");
        int port = 2207;

        // 2. Gửi mã SV; Mã câu hỏi (chú ý: đề UDP PTIT thường có dấu ";" ở đầu)
        byte[] req = ";B23DCCN067;toft6ekh".getBytes();
        socket.send(new DatagramPacket(req, req.length, ip, port));

        // 3. Nhận gói tin từ Server về (Dùng chung cho cả 2 dạng)
        byte[] buff = new byte[2048]; // 2048 byte bao trọn cả chuỗi lẫn Object
        socket.receive(new DatagramPacket(buff, buff.length));

        // --- BƯỚC 4, 5, 6: XỬ LÝ & TRẢ KẾT QUẢ THEO 2 DẠNG BÊN DƯỚI ---

        // 7. Đóng kết nối
        socket.close();
    }
}
```
### 1. UDP String / Data Type
```java
        // Trích xuất chuỗi từ dp đã nhận ở trên
        String s = new String(buff, 0, buff.length).trim();
        String[] parts = s.split(";", 2);
        String requestId = parts[0].trim();
        String data = parts[1].trim();

        // Xử lý logic...

        // Gửi kết quả về Server
        String res = requestId + ";" + "...";
        byte[] out = res.getBytes();
        socket.send(new DatagramPacket(out, out.length, ip, port));
```

### 2. UDP Object
```java
        byte[] requestId = new byte[8];
        System.arraycopy(buff, 0, requestId, 0, 8);

        // Đọc Object từ dp đã nhận ở trên
        ObjectInputStream ois = new ObjectInputStream(new ByteArrayInputStream(buff, 8, buff.length - 8));
        Student student = (Student) ois.readObject();

        // Xử lý logic trên student...

        // Gửi lại đối tượng về Server
        ByteArrayOutputStream baos = new ByteArrayOutputStream();
        ObjectOutputStream oos = new ObjectOutputStream(baos);
        oos.writeObject(student);
        oos.flush();

        byte[] objBytes = baos.toByteArray();
        byte[] out = new byte[8 + objBytes.length]; // Ghép 8 byte requestId + mảng byte Object rồi gửi về Server
        System.arraycopy(requestId, 0, out, 0, 8);
        System.arraycopy(objBytes, 0, out, 8, objBytes.length);
        socket.send(new DatagramPacket(out, out.length, ip, port));
```
- `System.arraycopy(src, srcPos, dest, destPos, length)`
        - src: Mảng chứa dữ liệu ban đầu cần lấy đi copy.
        - srcPos: Vị trí bắt đầu lấy dữ liệu trên mảng nguồn.
        - dest: Mảng nơi dữ liệu copy được dán vào.
        - destPos: Vị trí (chỉ số index) bắt đầu dán dữ liệu vào mảng đích.
        - length: Số lượng phần tử (số byte) cần sao chép.
- `ByteArrayInputStream(mảng byte, vị trí bắt đầu, ĐỘ DÀI CẦN LẤY)`


