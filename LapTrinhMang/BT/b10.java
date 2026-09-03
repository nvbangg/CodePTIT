import java.util.Scanner;

public class b10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i=1; i<=n;i++){
            for (int j=1; j<=n;j++){
                int k = (i+j-2)%n + 1;
                System.out.print(k);
                if (j<n){
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        sc.close();
    }
}