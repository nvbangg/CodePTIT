import java.util.Scanner;

public class J01009_TongGiaiThua {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long total = 0, cur = 1;
        for (int i = 2; i <= n; i++) {
            cur *= i;
            total += cur;
        }
        System.out.println(total);
    }

}
