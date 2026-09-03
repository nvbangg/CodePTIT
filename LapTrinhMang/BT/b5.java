import java.util.Scanner;

public class b5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i=0; i<n; i++)
        {
            for (int j=1;j<=n; j++){
                System.out.print((n*i+j) + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}
