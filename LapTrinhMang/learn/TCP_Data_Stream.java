import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.net.Socket;

public class TCP_Data_Stream {
    public static void main(String[] args) throws Exception{
        Socket socket = new Socket("36.50.135.242", 2207);
        DataOutputStream dos = new DataOutputStream(socket.getOutputStream());
        dos.writeUTF("B23DCCN067;jNEYbPud");
        DataInputStream dis = new DataInputStream(socket.getInputStream());
        int n = dis.readInt();
        String b = Integer.toBinaryString(n);
        String h = Integer.toHexString(n).toUpperCase();
        dos.writeUTF(b+";"+h);
        socket.close();
    }
}
