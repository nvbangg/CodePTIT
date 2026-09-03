import java.util.Scanner;

public class b14 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[][] a = new int[n][m];
        for (int i=0; i<n;i++){
            for (int j=0; j<m; j++)
                a[i][j] = sc.nextInt();
        }
        int maxLen = 0;
        int hang = 0, cot = 0;
        for (int i=0;i<n; i++){
            for (int j=0;j<m; j++){
                if (a[i][j] ==1){
                    int k = 1;
                    boolean check = true;
                    while (i+k <= n && j+ k <=m && check){
                        for (int r=i;r<i+k;r++){
                            for (int c=j; c<j+k;c++){
                                if (a[r][c] == 0){
                                    check = false;
                                    break;
                                }
                            }
                            if (!check) break;
                        }
                        if (check){
                            if (k>maxLen){
                                maxLen=k;
                                hang=i;
                                cot=j;
                            }
                            k++;
                        }
                    }
                }
            }
        }
        System.out.println(maxLen);
        System.out.print(hang +" "+cot);
        sc.close();
    }
}