import java.net.Socket;

public class TCP_Byte_Stream {
    public static void main(String[] args) throws Exception{
        Socket socket = new Socket("36.50.135.242", 2206);
        socket.getOutputStream().write("B23DCCN067;jNEYbPud".getBytes());
        byte[] buff = new byte[1024];
        int bytes = socket.getInputStream().read(buff);
        int n = Integer.parseInt(new String(buff, 0, bytes).trim());
        int c = 0;
        String s = "";
        while (n!=1){
            s+=n + " ";
            c++;
            if(n%2==0){
                n/=2;
            } else {
                n = n*3+1;
            }

        }
        s += "1";
        c++;
        socket.getOutputStream().write(String.format("%s; %d", s, c).getBytes());
        socket.close();
    }
}
