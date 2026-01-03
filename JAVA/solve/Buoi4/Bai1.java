import java.util.*;

public class Bai1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = Integer.parseInt(sc.nextLine());
        while (T-- > 0) {
            String[] ar = sc.nextLine().trim().split("\\s+");
            for (int i = ar.length - 1; i >= 0; i--) {
                System.out.print(ar[i] + " ");
            }
            System.out.println();
        }
    }
}
