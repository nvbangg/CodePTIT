import java.util.Scanner;

public class DanhSachCanhSuDungLopPairGeneric {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) {
                int x = sc.nextInt();
                if (x == 1 && i < j)
                    System.out.println(new Pair<>(i + 1, j + 1));
            }
    }
}
