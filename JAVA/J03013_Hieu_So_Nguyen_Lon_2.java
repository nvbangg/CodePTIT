import java.math.BigInteger;
import java.util.Scanner;

public class J03013_HieuSoNguyenLon2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger a = sc.nextBigInteger();
        BigInteger b = sc.nextBigInteger();
        BigInteger res = a.subtract(b);
        System.out.println(res);

    }
}
