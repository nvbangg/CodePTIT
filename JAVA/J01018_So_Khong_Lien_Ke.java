import java.util.Scanner;

public class J01018_SoKhongLienKe {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int T = sc.nextInt(); T-- >0;) {
            String s = sc.next();
            int sum = s.charAt(0) - '0';
            boolean ok = true;
            for (int i = 1; i < s.length(); i++) {
                int num = s.charAt(i) - '0';
                sum += num;
                if (Math.abs(num - (s.charAt(i - 1) - '0')) != 2) {
                    ok = false;
                    break;
                }
            }
            System.out.println(ok && sum % 10 == 0 ? "YES" : "NO");
        }
    }
}
