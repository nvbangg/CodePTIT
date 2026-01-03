import java.io.*;
import java.util.*;

public class Bai2 {
    public static int mod(String num, int m) {
        int res = 0;
        for (int i = 0; i < num.length(); i++)
            res = (res * 10 + (num.charAt(i) - '0')) % m;
        return res;
    }

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("SONGUYEN.IN"));
        int T = Integer.parseInt(sc.nextLine());

        while (T-- > 0) {
            String num = sc.nextLine().trim();
            boolean div7 = (mod(num, 7) == 0);
            boolean div13 = (mod(num, 13) == 0);

            if (div7 && div13)
                System.out.println("Both");
            else if (div7)
                System.out.println("Div 7");
            else if (div13)
                System.out.println("Div 13");
            else
                System.out.println("None");
        }
    }
}
