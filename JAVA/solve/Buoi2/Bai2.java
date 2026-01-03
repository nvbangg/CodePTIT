import java.io.*;
import java.util.*;

public class Bai2 {
    static boolean ok(int n) {
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

    public static void main(String[] args) throws Exception {
        ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream in2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> a = (ArrayList<Integer>) in1.readObject();
        ArrayList<Integer> b = (ArrayList<Integer>) in2.readObject();
        in1.close();
        in2.close();
        int[] c1 = new int[10001];
        int[] c2 = new int[10001];
        for (int x : a)
            if (ok(x))
                c1[x]++;
        for (int x : b)
            if (ok(x))
                c2[x]++;
        for (int i = 10; i <= 10000; i++)
            if (c1[i] > 0 && c2[i] > 0)
                System.out.println(i + " " + c1[i] + " " + c2[i]);

    }
}
