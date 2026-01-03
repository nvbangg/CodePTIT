import java.io.*;
import java.util.*;

public class Bai3 {
    public static void main(String[] args) throws Exception {
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<String> ds = (ArrayList<String>) in.readObject();
        for (String s : ds) {
            StringBuilder sb = new StringBuilder();
            for (char c : s.toCharArray()) {
                if (c == '0' || c == '1')
                    sb.append(c);
            }
            if (sb.length() == 0) {
                System.out.println("0 0");
            } else {
                String np = sb.toString();
                long gt = Long.parseLong(np, 2);
                System.out.println(np + " " + gt);
            }
        }
    }
}