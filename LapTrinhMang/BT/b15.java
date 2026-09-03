import java.util.Scanner;
import java.util.Arrays;

public class b15 {
    static char[] s;
    static char[] res;
    static boolean[] used;
    static boolean dau = true;

    static void hoanVi(int k) {
        if (k == s.length) {
            if (!dau)
                System.out.print(", ");
            String kq = new String(res);
            System.out.print(kq);
            dau = false;
            return;
        }
        for (int i=0; i<s.length; i++) {
            if (used[i])
                continue;
            used[i] = true;
            res[k] = s[i];
            hoanVi(k + 1);
            used[i] = false;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        s = str.toCharArray();
        Arrays.sort(s);
        used = new boolean[s.length];
        res = new char[s.length];
        hoanVi(0);
        sc.close();
    }
}