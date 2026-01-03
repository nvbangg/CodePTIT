import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Bai4 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("DATA.in"));
        Set<BigInteger> set = new HashSet<>();

        while (sc.hasNext()) {
            String token = sc.next();
            set.add(new BigInteger(token));
        }

        BigInteger sum = BigInteger.ZERO;
        BigInteger product = BigInteger.ONE;

        for (BigInteger num : set) {
            sum = sum.add(num);
            product = product.multiply(num);
        }

        System.out.println(sum);
        System.out.println(product);
    }
}
