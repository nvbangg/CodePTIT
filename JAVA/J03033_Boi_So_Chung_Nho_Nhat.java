import java.math.BigInteger;
import java.util.Scanner;

public class J03033_BoiSoChungNhoNhat {
        public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            BigInteger n = sc.nextBigInteger(), m = sc.nextBigInteger();
            System.out.println(n.multiply(m).divide(n.gcd(m)));
        }
    }
}
