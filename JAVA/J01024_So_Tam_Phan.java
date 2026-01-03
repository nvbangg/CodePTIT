import java.util.Scanner;

public class J01024_SoTamPhan {
    static boolean check(String s) {
        int n = s.length();
        for (int i = 0; i < n; i++)
            if (s.charAt(i) > '2')
                return false;
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
