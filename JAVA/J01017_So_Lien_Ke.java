import java.util.Scanner;

public class J01017_SoLienKe {
    static boolean check(String s) {
        for (int i = 1; i < s.length(); i++)
            if (Math.abs(s.charAt(i) - s.charAt(i - 1)) != 1)
                return false;
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int T = sc.nextInt(); T-- >0;)
            System.out.println(check(sc.next()) ? "YES" : "NO");
    }
}
