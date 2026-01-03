import java.io.*;
import java.util.*;

public class Bai5 {
    public static boolean khongGiam(int n) {
        if (n < 10)
            return false;
        int p = 10;
        while (n > 0) {
            int d = n % 10;
            if (d > p)
                return false;
            p = d;
            n /= 10;
        }
        return true;
    }

    public static Map<Integer, Integer> dem(ArrayList<Integer> a) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int x : a) {
            if (khongGiam(x))
                map.put(x, map.getOrDefault(x, 0) + 1);
        }
        return map;
    }

    public static void main(String[] args) throws Exception {
        ObjectInputStream o1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream o2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> a1 = (ArrayList<Integer>) o1.readObject();
        ArrayList<Integer> a2 = (ArrayList<Integer>) o2.readObject();
        o1.close();
        o2.close();
        Map<Integer, Integer> m1 = dem(a1);
        Map<Integer, Integer> m2 = dem(a2);
        TreeSet<Integer> set = new TreeSet<>(m1.keySet());
        set.retainAll(m2.keySet());
        for (int x : set)
            System.out.println(x + " " + m1.get(x) + " " + m2.get(x));
    }
}
