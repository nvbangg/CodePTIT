import java.util.*;

public class J01007_KiemTraSoFibonacci {
    static long[] f = new long[93];
    static {
        f[0] = 0;
        f[1] = 1;
        for (int i = 2; i < 93; i++)
            f[i] = f[i - 1] + f[i - 2];
    }

    static boolean fibo(long n) {
        for (long item : f) {
            if (item == n)
                return true;
            if (item > n)
                return false;
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int T = sc.nextInt(); T-- > 0;)
            System.out.println(fibo(sc.nextLong()) ? "YES" : "NO");
    }
}
