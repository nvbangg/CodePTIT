import java.util.*;

public class Bai3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        while (T-- > 0) {
            int N = sc.nextInt();
            TreeSet<Integer> evenSet = new TreeSet<>();
            TreeSet<Integer> oddSet = new TreeSet<>(Collections.reverseOrder());

            for (int i = 0; i < N; i++) {
                int x = sc.nextInt();
                if (x % 2 == 0)
                    evenSet.add(x);
                else
                    oddSet.add(x);
            }
            for (Integer num : evenSet)
                System.out.print(num + " ");
            System.out.println();
            for (Integer num : oddSet)
                System.out.print(num + " ");
            System.out.println();
        }
    }
}
