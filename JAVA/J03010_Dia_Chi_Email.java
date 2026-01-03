import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class J03010_DiaChiEmail {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        sc.nextLine();
        ArrayList<String> freq = new ArrayList<>();
        while (T-- > 0) {
            String[] a = sc.nextLine().trim().toLowerCase().split("\\s+");
            String s = a[a.length - 1];
            for (int i = 0; i < a.length - 1; i++)
                s += a[i].charAt(0);
            freq.add(s);
            int count = Collections.frequency(freq, s);
            s += (count == 1 ? "" : count) + "@ptit.edu.vn";
            System.out.println(s);
        }
    }
}
