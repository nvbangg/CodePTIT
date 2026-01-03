import java.io.*;
import java.util.*;

public class Bai3 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("DANHSACH.in"));
        int n = Integer.parseInt(sc.nextLine().trim());
        Map<String, Integer> dem = new HashMap<>();
        for (int i = 0; i < n; i++) {
            String s = sc.nextLine().trim().toLowerCase();
            String[] tu = s.split("\\s+");
            String ten = tu[tu.length - 1];
            StringBuilder email = new StringBuilder(ten);
            for (int j = 0; j < tu.length - 1; j++) {
                email.append(tu[j].charAt(0));
            }
            String goc = email.toString();
            int so = dem.getOrDefault(goc, 0) + 1;
            dem.put(goc, so);
            if (so == 1)
                System.out.println(goc + "@ptit.edu.vn");
            else
                System.out.println(goc + so + "@ptit.edu.vn");
        }
    }
}
