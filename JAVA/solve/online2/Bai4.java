import java.io.*;
import java.util.*;

public class Bai4 {
    public static void main(String[] args) throws Exception {
        ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream in2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<String> a = (ArrayList<String>) in1.readObject();
        ArrayList<Integer> b = (ArrayList<Integer>) in2.readObject();
        in1.close();
        in2.close();

        TreeSet<String> s1 = new TreeSet<>(a);
        TreeSet<Integer> s2 = new TreeSet<>(b);
        TreeSet<String> res = new TreeSet<>();

        for (String x : s1)
            for (int y : s2)
                res.add(x + String.format("%03d", y));

        for (String x : res)
            System.out.println(x);
    }
}
