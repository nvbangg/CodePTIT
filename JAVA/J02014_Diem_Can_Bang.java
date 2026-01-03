import java.util.Scanner;

public class J02014_DiemCanBang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            int sum = 0, left = 0, pos = -1;
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                sum += a[i];
            }
            for (int i = 0; i < n; i++) {
                if (left * 2 + a[i] == sum) {
                    pos = i + 1;
                    break;
                }
                left += a[i];
            }
            System.out.println(pos);
        }
    }
}
