import java.util.Scanner;

public class J01004_SoNguyenTo {
    static boolean prime(long n) {
        for (long i = 2; i <= Math.sqrt(n); i++)
            if (n % i == 0) return false;
        return n > 1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int T = sc.nextInt(); T-- > 0; )
            System.out.println(prime(sc.nextLong()) ? "YES" : "NO");
    }
}
