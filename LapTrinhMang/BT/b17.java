import java.util.Scanner;

public class b17 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] a = new int[n][n];
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++)
                a[i][j] = sc.nextInt();
        }

        for (int i=0; i<n; i++){
            for (int j=0; j<n-1; j++){
                int minIdx = j;
                for (int k=j+1; k<n; k++){
                    if (a[i][k] < a[i][minIdx])
                        minIdx = k;
                }
                int tmp = a[i][j];
                a[i][j] = a[i][minIdx];
                a[i][minIdx] = tmp;
            }
        }

        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                System.out.print(a[i][j]);
                if (j < n-1)
                    System.out.print(" ");
            }
            System.out.println();
        }
        sc.close();
    }
}