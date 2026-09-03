import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.net.Socket;
import java.util.HashSet;

public class TCP_Character_Stream {
    public static void main(String[] args) throws Exception{
        Socket socket = new Socket("36.50.135.242", 2208);
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
        bw.write("B23DCCN067;jNEYbPud\n");
        bw.flush();

        BufferedReader br = new BufferedReader(new InputStreamReader(socket.getInputStream()));
        String s = br.readLine();
        String res = "";
        HashSet<Character> set = new HashSet<>();
        for (Character c : s.toCharArray()){
            if (Character.isLetter(c) && !set.contains(c)){
                res += c;
                set.add(c);
            }
        }

        bw.write(res + "\n");
        bw.flush();

        socket.close();
    }
}
