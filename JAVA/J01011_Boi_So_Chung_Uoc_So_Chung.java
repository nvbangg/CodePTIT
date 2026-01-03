import java.util.Scanner;

public class J01011_BoiSoChungUocSoChung {
    public static long gcd(long a, long b) {
        while (b != 0) {
            long tmp = b;
            b = a % b;
            a = tmp;
        }
        return a;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int T = sc.nextInt(); T-- > 0;) {
            long a = sc.nextLong(), b = sc.nextLong();
            long g = gcd(a, b);
            System.out.println((a / g) * b + " " + g);
        }
    }
}
