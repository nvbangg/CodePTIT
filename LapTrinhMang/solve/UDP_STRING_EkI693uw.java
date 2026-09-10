import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

public class UDP_STRING_EkI693uw {
    public static void main(String[] args) throws Exception {
        DatagramSocket socket = new DatagramSocket();
        InetAddress ip = InetAddress.getByName("36.50.135.242");
        int port = 2208;

        byte[] req = ";B23DCCN067;EkI693uw".getBytes();
        socket.send(new DatagramPacket(req, req.length, ip, port));

        byte[] buff = new byte[2048];
        DatagramPacket dp = new DatagramPacket(buff, buff.length);
        socket.receive(dp);

        String s = new String(dp.getData(), 0, dp.getLength()).trim();
        String[] parts = s.split(";", 2);
        String requestId = parts[0];
        String data = parts[1].trim();

        String[] words = data.split(" ");
        String res = "";

        for (String w : words){
            res += w.substring(0,1).toUpperCase() + w.substring(1).toLowerCase() + " ";
        }
        res = requestId + ";" + res;

        byte[] out = res.getBytes();
        socket.send(new DatagramPacket(out, out.length, ip, port));
        socket.close();
    }
}
