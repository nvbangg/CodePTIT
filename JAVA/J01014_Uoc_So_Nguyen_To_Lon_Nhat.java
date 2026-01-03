import java.util.Scanner;

public class J01014_UocSoNguyenToLonNhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int T = sc.nextInt(); T-- > 0;) {
            long n = sc.nextLong(), res = 0;
            for (long i = 2; i <= Math.sqrt(n); i++) {
                while (n % i == 0) {
                    res = i;
                    n /= i;
                }
            }
            if (n > 1)
                res = n;
            System.out.println(res);
        }
    }
}
