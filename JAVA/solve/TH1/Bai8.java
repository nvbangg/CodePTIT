import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

public class Bai8 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("MATRIX.in"));
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt(), m = sc.nextInt(), col = sc.nextInt();
            int[] data = new int[n * m];
            for (int i = 0; i < n * m; i++) data[i] = sc.nextInt();
            Matrix mt = new Matrix(n, m, col, data);
            mt.sortColumn();
            for (int i = 0; i < mt.getN(); i++) {
                for (int j = 0; j < mt.getM(); j++) {
                    System.out.print(mt.getValue(i, j) + " ");
                }
                System.out.println();
            }
        }
    }
}