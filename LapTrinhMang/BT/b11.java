import java.util.Scanner;

public class b11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] a = new int[n][n];
        int tren=0, duoi=n-1, trai=0, phai=n-1;
        int d = 1;
        while (d<=n*n){
            for (int j=trai; j<=phai;j++)
                a[tren][j]=d++;
            tren++;
            for (int i=tren; i<=duoi;i++)
                a[i][phai]=d++;
            phai--;
            for (int j=phai; j>=trai;j--)
                a[duoi][j]=d++;
            duoi--;
            for (int i=duoi; i>=tren;i--)
                a[i][trai]=d++;
            trai++;
        }
        for (int i=0; i<n;i++){
            for (int j=0; j<n;j++){
                System.out.printf("%3d", a[i][j]);
                if (j<n-1)
                    System.out.print(" ");
            }
            System.out.println();
        }
        sc.close();
    }
}