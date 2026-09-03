import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.util.Arrays;

public class TCP_BYTE_RAW_2bqXfIJH {
    public static void main(String[] args) throws Exception {
        Socket socket = new Socket("36.50.135.242", 2206);

        OutputStream os = socket.getOutputStream();
        InputStream is = socket.getInputStream();

        os.write("B23DCCN067;2bqXfIJH".getBytes());
        byte[] buff = new byte[1024];
        int bytes = is.read(buff);
        String input = new String(buff, 0, bytes).trim();
        

        String[] a = input.split(",");
        int[] nums = new int[a.length];
        for (int i = 0; i<a.length; i++){
            nums[i] = Integer.parseInt(a[i].trim());
        }
        Arrays.sort(nums);

        int min = Integer.MAX_VALUE;
        int minDiff = 0;
        int maxDiff = 0;
        for (int i = 0; i<nums.length-1; i++){
            int diff = nums[i+1]-nums[i];
            if (diff<min){
                min = diff;
                minDiff = nums[i];
                maxDiff = nums[i+1];
            }
        }

        os.write((min+","+ minDiff+","+ maxDiff).getBytes());

        socket.close();
    }
}
