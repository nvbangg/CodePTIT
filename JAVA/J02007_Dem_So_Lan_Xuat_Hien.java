import java.util.Scanner;

public class J02007_DemSoLanXuatHien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int t = 1; t <= T; t++) {
            System.out.printf("Test %d:\n", t);
            int n = sc.nextInt();
            int[] a = new int[n];
            int[] freq = new int[100001];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                freq[a[i]] += 1;
            }
            for (int i = 0; i < n; i++) {
                if (freq[a[i]] > 0) {
                    System.out.printf("%d xuat hien %d lan\n", a[i], freq[a[i]]);
                    freq[a[i]] = 0;
                }
            }
        }
    }
}
