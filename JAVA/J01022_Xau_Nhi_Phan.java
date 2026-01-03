import java.util.Scanner;

public class J01022_XauNhiPhan {
    static long[] f = new long[93];
    static {
        f[0] = 0;
        f[1] = 1;
        for (int i = 2; i < 93; i++)
            f[i] = f[i - 1] + f[i - 2];
    }

    static char solve(int n, long k) {
        if (n == 1)
            return '0';
        if (n == 2)
            return '1';
        if (k <= f[n - 2])
            return solve(n - 2, k);
        return solve(n - 1, k - f[n - 2]);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int T = sc.nextInt(); T-- > 0;) {
            int n = sc.nextInt();
            long k = sc.nextLong();
            System.out.println(solve(n, k));
        }
    }
}
