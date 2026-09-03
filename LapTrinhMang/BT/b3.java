import java.util.Scanner;

public class b3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        int sum = 0;
        for (int i =0; i<n; i++){
            a[i] = sc.nextInt();
            sum += a[i];
        }
        System.out.println(sum/n);
        sc.close();
    }
}
