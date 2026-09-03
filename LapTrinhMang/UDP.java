import java.net.DatagramSocket;
import java.net.InetAddress;

public class UDP {
    public static void main(String[] args) throws Exception {
        // 1. Khởi tạo DatagramSocket (Không cần truyền IP/Port ở bước này như TCP)
        DatagramSocket socket = new DatagramSocket();
        
        // 2. Khai báo IP và Port của Server theo đề bài
        InetAddress serverIP = InetAddress.getByName("36.50.135.242");
        int serverPort = 2002;

        // 3. Chuẩn bị dữ liệu và gửi gói tin (Mã sinh viên;Mã câu hỏi)
        // 4. Nhận gói tin từ Server
        // ! Chi tiết mẫu code phần 3, 4 theo 2 dạng bên dưới

        // 5. Xử lý logic theo yêu cầu đề bài

        // 6. Đóng gói kết quả và gửi lại Server

        // 7. Đóng kết nối
        socket.close();
    }
}