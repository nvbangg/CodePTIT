import java.util.Scanner;

public class J02006_HopCuaHaiDaySo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt();
        boolean[] a = new boolean[1001], b = new boolean[1001];
        for (int i = 0; i < n; i++)
            a[sc.nextInt()] = true;
        for (int i = 0; i < m; i++)
            b[sc.nextInt()] = true;
        for (int i = 0; i <= 1000; i++) {
            if (a[i] || b[i])
                System.out.printf("%d ", i);
        }
    }
}
