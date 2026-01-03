import java.util.Scanner;

public class J01003_GiaiPhuongTrinhBacNhat {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(), b = sc.nextInt();
        if (a == 0) 
            System.out.println(b == 0 ? "VSN" : "VN");
        else 
            System.out.printf("%.2f", (float)-b/a);
        
            
    }
}
