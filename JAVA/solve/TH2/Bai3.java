import java.io.*;
import java.util.*;

public class Bai3 {
    public static boolean thuanNghich(int n) {
        String s = String.valueOf(n);
        int l = 0, r = s.length() - 1;
        while (l < r) {
            if (s.charAt(l) != s.charAt(r))
                return false;
            l++;
            r--;
        }
        return true;
    }

    public static void main(String[] args) throws Exception {
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DAYSO.DAT"));
        ArrayList<Integer> list = (ArrayList<Integer>) ois.readObject();
        ois.close();
        TreeSet<Integer> set = new TreeSet<>();
        for (int x : list) {
            if (x >= 100 && thuanNghich(x))
                set.add(x);
        }
        for (int x : set)
            System.out.println(x);
    }
}
