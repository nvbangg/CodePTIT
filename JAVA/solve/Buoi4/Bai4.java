import java.util.*;

public class Bai4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int N = sc.nextInt();
            int[] a = new int[N];
            Map<Integer, Integer> freq = new LinkedHashMap<>();
            Map<Integer, Integer> first = new HashMap<>();
            for (int i = 0; i < N; i++) {
                a[i] = sc.nextInt();
                freq.put(a[i], freq.getOrDefault(a[i], 0) + 1);
                if (!first.containsKey(a[i]))
                    first.put(a[i], i);
            }

            ArrayList<Integer> unique = new ArrayList<>(freq.keySet());
            unique.sort((x, y) -> {
                int fx = freq.get(x);
                int fy = freq.get(y);
                if (fx != fy)
                    return Integer.compare(fy, fx);
                return Integer.compare(first.get(x), first.get(y));
            });

            for (int num : unique) {
                for (int i = 0; i < freq.get(num); i++)
                    System.out.print(num + " ");
            }
            System.out.println();
        }
    }
}
