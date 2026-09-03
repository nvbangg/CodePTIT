import java.util.Scanner;

public class b13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] a = new int[n][n];
        for (int i=0; i<n;i++){
            for (int j=0; j<n;j++)
                a[i][j] = sc.nextInt();
        }
        boolean ok = true;
        for (int i=0; i<n;i++){
            for (int j=i+1; j<n;j++){
                if (a[i][j] != a[j][i]){
                    ok = false;
                    break;
                }
            }
            if (!ok)
                break;
        }
        if (ok)
            System.out.print("YES");
        else
            System.out.print("NO");
        sc.close();
    }
    
}