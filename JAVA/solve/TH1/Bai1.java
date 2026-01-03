import java.util.*;

public class Bai1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        TreeSet<Integer> A = new TreeSet<>();
        TreeSet<Integer> B = new TreeSet<>();
        for (int i = 0; i < n; i++) {
            A.add(sc.nextInt());
        }
        for (int i = 0; i < m; i++) {
            B.add(sc.nextInt());
        }
        TreeSet<Integer> giao = new TreeSet<>(A);
        giao.retainAll(B);
        for (int x : giao)
            System.out.print(x + " ");
        System.out.println();
        TreeSet<Integer> hieuA_B = new TreeSet<>(A);
        hieuA_B.removeAll(B);
        for (int x : hieuA_B)
            System.out.print(x + " ");
        System.out.println();
        TreeSet<Integer> hieuB_A = new TreeSet<>(B);
        hieuB_A.removeAll(A);
        for (int x : hieuB_A)
            System.out.print(x + " ");
        System.out.println();
    }
}