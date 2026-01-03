import java.util.Scanner;

public class J01002_TinhTongNSoNguyenDuongDauTien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int T = sc.nextInt(); T-- > 0;) {
            long n = sc.nextLong();
            System.out.println((n * (n + 1) / 2));
        }

    }
}
