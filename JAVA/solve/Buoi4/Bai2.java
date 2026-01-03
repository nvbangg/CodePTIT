import java.util.Scanner;
import java.util.Stack;

public class Bai2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = Integer.parseInt(sc.nextLine());
        while (T-- > 0) {
            String s = sc.nextLine();
            int cnt = 1;
            Stack<Integer> st = new Stack<>();
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == '(') {
                    System.out.print(cnt + " ");
                    st.push(cnt++);
                } else if (s.charAt(i) == ')') {
                    System.out.print(st.pop() + " ");
                }
            }
            System.out.println();
        }
    }
}