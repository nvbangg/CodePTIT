import java.util.Scanner;

public class b16 {
    static int n;
    static int[] a;
    static int[] res;
    static void inTapCon(int len) {
        System.out.print("[");
        for (int i=0; i<len; i++) {
            System.out.print(res[i]);
            if (i < len-1)
                System.out.print(",");
        }
        System.out.println("]");
    }
    static void sinhTapCon(int start, int k, int len) {
        if (k == len) {
            inTapCon(len);
            return;
        }
        for (int i=start; i<n; i++) {
            res[k] = a[i];
            sinhTapCon(i+1, k+1, len);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        a = new int[n];
        for (int i=0; i<n; i++)
            a[i] = sc.nextInt();
        res = new int[n];
        for (int len=0; len<=n; len++)
            sinhTapCon(0, 0, len);
        sc.close();
    }
}