import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.net.Socket;

public class TCP_DATA_1H9rZUmX {
    public static void main(String[] args) throws Exception {
        Socket socket = new Socket("36.50.135.242", 2207);

        DataOutputStream dos = new DataOutputStream(socket.getOutputStream());
        DataInputStream dis = new DataInputStream(socket.getInputStream());

        dos.writeUTF("B23DCCN067;1H9rZUmX");
        dos.flush();

        String input = dis.readUTF();
        int n = dis.readInt();
        String res = "";
        
        for (char c : input.toCharArray()) {
            if (Character.isUpperCase(c)) {
                res += (char) ('A' + (c - 'A' - n % 26 + 26) % 26);
            } else if (Character.isLowerCase(c)) {
                res += (char) ('a' + (c - 'a' - n % 26 + 26) % 26);
            } else {
                res += c;
            }
        }
        
        dos.writeUTF(res);
        dos.flush();
        socket.close();
    }
}
