import java.util.Scanner;

public class J03006_SoDep1 {
    static boolean check(String s) {
        int n = s.length();
        for (int i = 0; i <= n / 2; i++) {
            char c1 = s.charAt(i), c2 = s.charAt(n - i - 1);
            if (c1 != c2 || (c1 - '0') % 2 == 1)
                return false;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            String s = sc.next();
            System.out.println(check(s) ? "YES" : "NO");
        }
    }
}
