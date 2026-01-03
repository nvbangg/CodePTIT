import java.util.Scanner;

public class J01006_TinhSoFibonacci {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long[] f = new long[93];
        f[0] = 0;
        f[1] = 1;
        for (int i = 2; i <= 92; i++)
            f[i] = f[i - 1] + f[i - 2];
            
        for (int T = sc.nextInt(); T-- > 0;)
            System.out.println(f[sc.nextInt()]);
    }
}
