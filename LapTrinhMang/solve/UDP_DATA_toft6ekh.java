import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

public class UDP_DATA_toft6ekh {
    public static void main(String[] args) throws Exception {
        DatagramSocket socket = new DatagramSocket();
        InetAddress ip = InetAddress.getByName("36.50.135.242");
        int port = 2207;

        byte[] req = ";B23DCCN067;toft6ekh".getBytes();
        socket.send(new DatagramPacket(req, req.length, ip, port));

        byte[] buff = new byte[2048];
        DatagramPacket dp = new DatagramPacket(buff, buff.length);
        socket.receive(dp);

        String s= new String(dp.getData(), 0, dp.getLength()).trim();

        String[] parts = s.split(";");
        String requestId = parts[0];
        int n = Integer.parseInt(parts[1]);

        boolean[] mark = new boolean[n+1];
        for (String x : parts[2].split(",")){
            int val = Integer.parseInt(x);
            if (val >=1 && val <= n){
                mark[val] = true;
            }
        }

        String res = requestId + ";";
        for (int i = 1; i<=n; i++){
            if (!mark[i]){
                res += i + ",";
            }
        }
        if (res.endsWith(",")){
            res = res.substring(0, res.length() - 1);

        }

        byte[] out = res.getBytes();
        socket.send(new DatagramPacket(out, out.length, ip, port));

        socket.close();
    }
}