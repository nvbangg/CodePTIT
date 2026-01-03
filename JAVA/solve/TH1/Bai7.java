
import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.*;

public class Bai7 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        Set<BigInteger> set = new HashSet<>();
        while(sc.hasNext()) {
            set.add(new BigInteger(sc.next()));
        }
        BigInteger sum = BigInteger.ZERO;
        BigInteger product = BigInteger.ONE;
        for(BigInteger x : set) {
            sum = sum.add(x);
            product = product.multiply(x);
        }
        System.out.println(sum);
        System.out.println(product);
    }
}
