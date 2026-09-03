import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.net.Socket;
import java.util.ArrayList;
import java.util.List;

public class TCP_CHARACTER_jNEYbPud_AI {
    public static void main(String[] args) throws Exception {
        Socket socket = new Socket("36.50.135.242", 2208);

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
        BufferedReader br = new BufferedReader(new InputStreamReader(socket.getInputStream()));

        // a. Gửi mã sinh viên và mã câu hỏi
        bw.write("B23DCCN067;jNEYbPud\n");
        bw.flush();

        // b. Nhận chuỗi tên miền từ server
        String s = br.readLine();

        // c. Xử lý tách chuỗi và lọc tên miền kết thúc bằng .edu
        String[] domains = s.split("[,\\s]+"); // để tách cho cả chỉ mỗi , hoặc space
        List<String> eduList = new ArrayList<>();
        for (String domain : domains) {
            if (domain.endsWith(".edu")) {
                eduList.add(domain.trim());
            }
        }
        String res = String.join(", ", eduList);

        // Gửi kết quả lên server
        bw.write(res + "\n");
        bw.flush();

        // d. Đóng kết nối
        socket.close();
    }
}