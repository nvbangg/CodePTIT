import java.util.Scanner;

public class J01005_ChiaTamGiac {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int T = sc.nextInt(); T-- > 0;) {
            double n = sc.nextDouble(), h = sc.nextDouble();
            for (int i = 1; i < n; i++) {
                double res = Math.sqrt(i / n) * h; 
                // (res/h)^2 = i/n (tỷ lệ diện tích = bình phương tỷ lệ chiều cao)
                System.out.printf("%.6f ", res);
            }
            System.out.println();
        }
    }
}
