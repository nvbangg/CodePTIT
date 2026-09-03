import java.util.Scanner;

public class b19 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i=0; i<n; i++)
            a[i] = sc.nextInt();
        for (int i=0; i<n-1; i++){
            int maxIdx = i;
            for (int j=i+1; j<n; j++){
                if (a[j] > a[maxIdx])
                    maxIdx = j;
            }
            int tmp = a[i];
            a[i] = a[maxIdx];
            a[maxIdx] = tmp;
        }
        boolean dau = true;
        for (int i=0; i<n; i++){
            if (i == 0 || a[i] != a[i-1]){
                if (!dau)
                    System.out.print(" ");
                System.out.print(a[i]);
                dau = false;
            }
        }
        sc.close();
    }
}