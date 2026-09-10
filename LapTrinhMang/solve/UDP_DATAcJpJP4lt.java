import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

public class UDP_DATAcJpJP4lt {
    public static void main(String[] args) throws Exception {
        DatagramSocket socket = new DatagramSocket();
        InetAddress ip = InetAddress.getByName("36.50.135.242");
        int port = 2207;

        byte[] req = ";B23DCCN067;cJpJP4lt".getBytes();
        socket.send(new DatagramPacket(req, req.length, ip, port));

        byte[] buff = new byte[2048];
        DatagramPacket dp = new DatagramPacket(buff, buff.length);
        socket.receive(dp);

        String s = new String(dp.getData(), 0, dp.getLength()).trim();

        String[] parts = s.split(";");
        String[] nums = parts[1].split(",");

        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;

        for (String x : nums) {
            int val = Integer.parseInt(x.trim());
            if (val > max) max = val;
            if (val < min) min = val;
        }

        String res = parts[0] + ";" + max + "," + min;

        byte[] out = res.getBytes();
        socket.send(new DatagramPacket(out, out.length, ip, port));

        socket.close();
    }
}