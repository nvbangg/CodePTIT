import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.net.Socket;

public class TCP_DATA_CR3z42T9 {
    public static void main(String[] args) throws Exception {
        Socket socket = new Socket("36.50.135.242", 2207);
        DataOutputStream dos = new DataOutputStream(socket.getOutputStream());
        DataInputStream dis = new DataInputStream(socket.getInputStream());
        dos.writeUTF("B23DCCN067;CR3z42T9");
        dos.flush();

        int a = dis.readInt();
        int b = dis.readInt();
        int tong = a+b;
        int tich = a*b;

        dos.writeInt(tong);
        dos.writeInt(tich);
        dos.flush();
        socket.close();
    }
}
