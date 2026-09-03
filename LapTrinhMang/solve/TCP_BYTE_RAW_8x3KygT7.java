import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.util.Arrays;

public class TCP_BYTE_RAW_8x3KygT7 {
    public static void main(String[] args) throws Exception {
        Socket socket = new Socket("36.50.135.242", 2206);

        OutputStream os = socket.getOutputStream();
        InputStream is = socket.getInputStream();
        os.write("B23DCCN067;8x3KygT7".getBytes());
        byte[] buff = new byte[1024];
        int bytes = is.read(buff);
        String input = new String(buff, 0, bytes).trim();
        String[] a = input.split(",");
        int[] nums = new int[a.length];
        for (int i = 0; i<a.length; i++){
            nums[i] = Integer.parseInt(a[i].trim());
        }
        int[] nums2 = nums.clone();
        Arrays.sort(nums2);
        int max2 = nums2[nums2.length - 2];
        String res = max2 + ",";
        for (int i = 0; i<nums.length; i++){
            if (nums[i] == max2){
                res += i+"";
                break;
            }
        }

        os.write(res.getBytes());

        socket.close();

    }
}
