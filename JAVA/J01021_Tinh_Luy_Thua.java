import java.util.Scanner;

public class J01021_TinhLuyThua {
    static final long MOD = (long) (1e9 + 7);

    static long pow(long a, long b) {
        if (b == 0)
            return 1;
        long half = pow(a, b / 2);
        long res = (half * half) % MOD;
        return (b % 2 == 0) ? res : (res * a) % MOD;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (true) {
            long a = sc.nextLong(), b = sc.nextLong();
            if (a == 0 && b == 0)
                break;
            System.out.println(pow(a, b));
        }
    }
}
