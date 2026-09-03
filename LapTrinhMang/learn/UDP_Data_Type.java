import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

public class UDP_Data_Type {
    public static void main(String[] args) throws Exception {
        DatagramSocket socket = new DatagramSocket();
        InetAddress address = InetAddress.getByName("36.50.135.242");

        byte[] req = ";B23DCCN067;toft6ekh".getBytes();
        socket.send(new DatagramPacket(req, req.length, address, 2207));

    }
}
