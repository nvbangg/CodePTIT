import java.util.Scanner;

public class J01013_TongUocSo1 {
    static final int N = 2000000;
    static int[] minPrime = new int[N + 1];

    static void sang() {
        for (int i = 2; i <= Math.sqrt(N); i++)
            if (minPrime[i] == 0)
                for (int j = i * i; j <= N; j += i)
                    if (minPrime[j] == 0)
                        minPrime[j] = i;
        // gán giá trị cho các số chưa gán (có các số > sqrt(N))
        for (int i = 2; i <= N; i++)
            if (minPrime[i] == 0)
                minPrime[i] = i;
    }

    public static void main(String[] args) {
        sang();
        Scanner sc = new Scanner(System.in);
        long total = 0;
        // while (t-- > 0) {
        for (int T = sc.nextInt(); T-- > 0;) {
            int x = sc.nextInt();
            while (x > 1) {
                total += minPrime[x];
                x /= minPrime[x];
            }
        }
        System.out.println(total);
    }
}
