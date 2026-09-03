import java.util.Scanner;

public class b6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i=1; i<=n; i++)
        {
            for (int j = 1; j<= i; j++){
                if ( j==1 || j==i || i == n){
                    System.out.print("*");
                }
                else System.out.print(" ");
            }
            System.out.println();
        }    
        for (int i = 1; i<=n; i++){
            for (int j = 1; j<= n-i; j++) System.out.print(" ");
            for (int j =1; j<=2*i -1; j++){
                if (j==1 || j== 2*i-1 || (i==n && j%2!=0)){
                    System.out.print("*");
                } 
                else System.out.print(" ");
            }
            System.out.println();
        }
        sc.close();
    }
}
