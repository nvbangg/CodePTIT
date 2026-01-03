import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Bai2 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("DAYSO.in"));
        int n = sc.nextInt();
        BigInteger min = null, max = null, sum = BigInteger.ZERO;
        for (int i = 0; i < n; i++) {
            BigInteger x = sc.nextBigInteger();
            if (min == null || x.compareTo(min) < 0)
                min = x;
            if (max == null || x.compareTo(max) > 0)
                max = x;
            sum = sum.add(x);
        }
        System.out.println(min);
        System.out.println(max);
        System.out.println(sum);
        sc.close();
    }
}
