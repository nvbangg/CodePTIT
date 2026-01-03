import java.math.BigInteger;
import java.util.Scanner;

public class J02008_BoiSoNhoNhatCuaNSoNguyenDuongDauTien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();
            BigInteger bcnn = BigInteger.ONE;
            for (int i = 2; i <= n; i++) {
                BigInteger x = BigInteger.valueOf(i);
                bcnn = bcnn.multiply(x).divide(bcnn.gcd(x)); 
            }
            System.out.println(bcnn);
        }
    }
}
