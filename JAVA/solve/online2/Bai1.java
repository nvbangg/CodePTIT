import java.util.*;

public class Bai1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++)
                a[i] = sc.nextInt();
            LinkedHashMap<Integer, Integer> m = new LinkedHashMap<>();
            for (int x : a)
                m.put(x, m.getOrDefault(x, 0) + 1);
            List<Integer> lst = new ArrayList<>(m.keySet());
            lst.sort((x, y) -> m.get(y) - m.get(x));
            for (int x : lst)
                for (int i = 0; i < m.get(x); i++)
                    System.out.print(x + " ");
            System.out.println();
        }
        sc.close();
    }
}
