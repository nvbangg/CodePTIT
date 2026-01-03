import java.util.Scanner;

public class J01016_ChuSo4VaChuSo7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int cnt = 0;
        for (char c : s.toCharArray())
            if (c == '4' || c == '7')
                cnt++;
        System.out.println((cnt == 4 || cnt == 7) ? "YES" : "NO");
    }
}
