import java.util.Scanner;

public class b12 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] c = new int[n][n];
        for (int i=0; i<n;i++){
            c[i][0] = 1;
            c[i][i] = 1;
            for (int j=1; j<i;j++)
                c[i][j] = c[i-1][j-1] + c[i-1][j];
        }
        for (int i=0; i<n;i++){
            for (int j=0; j<=i;j++){
                System.out.print(c[i][j]+" ");
            }
            System.out.println();
        }
        sc.close();
    }
}