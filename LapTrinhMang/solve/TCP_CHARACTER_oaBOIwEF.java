import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.net.Socket;
import java.util.LinkedHashMap;
import java.util.Map;

public class TCP_CHARACTER_oaBOIwEF {
    public static void main(String[] args) throws Exception {
        Socket socket = new Socket("36.50.135.242", 2208);

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
        BufferedReader br = new BufferedReader(new InputStreamReader(socket.getInputStream()));

        bw.write("B23DCCN067;oaBOIwEF\n");
        bw.flush();
        String input = br.readLine();

        Map<Character, Integer> map = new LinkedHashMap<>();
        for (char c : input.toCharArray()){
            if (Character.isLetterOrDigit(c)){
                map.put(c, map.getOrDefault(c, 0) +1);

            }
        }

        String res = "";
        for (char c : map.keySet()){
            int cnt = map.get(c);
            if (cnt>1){
                res += c + ":"+cnt+ ",";
            }
        }

        bw.write(res + "\n");
        bw.flush();
        
        socket.close();
    }
}
