import java.util.Scanner;

public class J03007_SoDep2 {
    static boolean check(String s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++)
            sum += s.charAt(i) - '0';
        return sum % 10 == 0;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            StringBuilder s = new StringBuilder(sc.next());
            boolean ok = s.toString().matches("^8.*8$") && s.equals(s.reverse()) && check(s.toString());
            System.out.println(ok ? "YES" : "NO");
        }
    }
}
