import java.util.Scanner;

public class J01008_PhanTichThuaSoNguyenTo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int t = 1, T = sc.nextInt(); t <= T; t++) {
            int n = sc.nextInt();
            System.out.printf("Test %d: ", t);
            for (int i = 2; i <= Math.sqrt(n); i++) {
                int cnt = 0;
                while (n % i == 0) {
                    cnt++;
                    n /= i;
                }
                if (cnt > 0)
                    System.out.printf("%d(%d) ", i, cnt);
            }
            if (n > 1)
                System.out.printf("%d(1)", n);
            System.out.println();
        }
    }
}
