import java.io.*;
import java.util.*;

public class Bai4 {
    public static void main(String[] args) throws Exception {
        Scanner in = new Scanner(new File("VANBAN.in"));
        TreeSet<String> set = new TreeSet<>();
        while (in.hasNext()) {
            String w = in.next();
            if (w.matches(".*\\d.*") && !w.matches(".*[.,!?:].*"))
                set.add(w);
        }
        for (String x : set)
            System.out.println(x);
        in.close();
    }
}
