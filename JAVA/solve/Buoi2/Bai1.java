import java.io.*;
import java.util.*;

public class Bai1 {
    public static void main(String[] args) throws Exception {
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("DAYSO.DAT"));
        ArrayList<Integer> a = (ArrayList<Integer>) in.readObject();
        in.close();
        boolean[] d = new boolean[1000001];
        for (int x : a) {
            if (x >= 100 && x == rev(x))
                d[x] = true;
        }
        for (int i = 100; i <= 1000000; i++) {
            if (d[i])
                System.out.println(i);
        }
    }

    static int rev(int n) {
        int r = 0;
        while (n > 0) {
            r = r * 10 + n % 10;
            n /= 10;
        }
        return r;
    }
}
