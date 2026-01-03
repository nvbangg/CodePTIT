import java.util.Scanner;
import java.math.BigInteger;

public class Bai5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next().trim();
        sc.close();

        while (s.length() > 1) {
            int mid = s.length() / 2;
            String left = s.substring(0, mid);
            String right = s.substring(mid);

            BigInteger a = new BigInteger(left);
            BigInteger b = new BigInteger(right);

            s = a.add(b).toString();
            System.out.println(s);
        }
    }
}
