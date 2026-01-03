import java.util.Scanner;

public class J01010_CatDoi {
    public static long convert(String s) {
        long res = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == '1')
                res = res * 10 + 1;
            else if (c == '0' || c == '8' || c == '9')
                res = res * 10;
            else
                return 0;
        }
        return res;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int T = sc.nextInt(); T-- > 0;) {
            String s = sc.next();
            long res = convert(s);
            if (res == 0)
                System.out.println("INVALID");
            else
                System.out.println(res);
        }
    }
}
