import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

public class UDP_STRING_0qGfT6B4 {
    public static void main(String[] args) throws Exception {
        DatagramSocket socket = new DatagramSocket();
        InetAddress ip = InetAddress.getByName("36.50.135.242");
        int port = 2208;

        byte[] req = ";B23DCCN067;0qGfT6B4".getBytes();
        socket.send(new DatagramPacket(req, req.length, ip, port));

        byte[] buff = new byte[2048];
        DatagramPacket dp = new DatagramPacket(buff, buff.length);
        socket.receive(dp);

        String s = new String(dp.getData(), 0, dp.getLength()).trim();

        String[] parts = s.split(";", 2);
        String requestId = parts[0].trim();
        String data = parts[1].trim();

        int[] count = new int[256];
        for (char c : data.toCharArray()) {
            count[c]++;
        }

        int max = 0;
        char maxChar = 0;
        for (char c : data.toCharArray()) {
            if (count[c] > max) {
                max = count[c];
                maxChar = c;
            }
        }

        String pos = "";
        for (int i = 0; i < data.length(); i++) {
            if (data.charAt(i) == maxChar) {
                pos += (i + 1) + ",";
            }
        }

        String res = requestId + ";" + maxChar + ":" + pos;

        byte[] out = res.getBytes();
        socket.send(new DatagramPacket(out, out.length, ip, port));

        socket.close();
    }
}