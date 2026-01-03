import java.util.Scanner;

public class J03005_ChuanHoaXauHoTen2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        sc.nextLine();
        while (T-- > 0) {
            String[] a = sc.nextLine().trim().split("\\s+");
            for (int i = 1; i < a.length; i++) {
                System.out.print(a[i].substring(0, 1).toUpperCase() + a[i].substring(1).toLowerCase());
                if (i != a.length - 1) {
                    System.out.print(" ");
                }
            }
            System.out.print(", " + a[0].toUpperCase() + "\n");
        }
    }
}
