import java.util.Scanner;

public class b8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i<n;i ++){
            for (int j = 0; j<n; j++){
                if ((i+j)%2==0) System.out.print("B");
                else System.out.print("W");
                
            }
            System.out.println();
        }
        sc.close();
    }
}
