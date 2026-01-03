import java.util.Scanner;

public class J03004_ChuanHoaXauHoTen1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        sc.nextLine();
        while (T-- > 0) {
            String[] a = sc.nextLine().trim().split("\\s+");
            for (int i = 0; i < a.length; i++)
                a[i] = a[i].substring(0, 1).toUpperCase() + a[i].substring(1).toLowerCase();
            System.out.println(String.join(" ", a));
        }
    }
}
