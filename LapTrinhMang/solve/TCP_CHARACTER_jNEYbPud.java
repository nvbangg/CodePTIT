import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.net.Socket;

public class TCP_CHARACTER_jNEYbPud {
    public static void main(String[] args) throws Exception {
        Socket socket = new Socket("36.50.135.242", 2208);

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
        BufferedReader br = new BufferedReader(new InputStreamReader(socket.getInputStream()));

        bw.write("B23DCCN067;jNEYbPud\n");
        bw.flush();
        String input = br.readLine();

        String[] a = input.split(", ");
        String res = "";
        for (String s : a){
            if (s.endsWith(".edu")){
                res += s + ", ";
            }
        }
        if (res.length()>0){
            res = res.substring(0, res.length()-2);
        }

        bw.write(res + "\n");
        bw.flush();

        socket.close();
    }
}