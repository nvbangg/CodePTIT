import java.util.Scanner;

public class J01026_SoChinhPhuong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();
            int k = (int) Math.sqrt(n);
            System.out.println(k * k == n ? "YES" : "NO");
        }
    }
}
