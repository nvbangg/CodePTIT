import java.math.BigInteger;
import java.util.Scanner;

public class Bai1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String num = sc.nextLine().trim();

        while (num.length() > 1) {
            int n = num.length();
            int mid = n / 2;

            String left = num.substring(0, mid);
            String right = num.substring(mid);

            if (left.isEmpty())
                left = "0";

            BigInteger a = new BigInteger(left);
            BigInteger b = new BigInteger(right);
            BigInteger sum = a.add(b);

            num = sum.toString();

            System.out.println(num);
        }

        sc.close();
    }
}