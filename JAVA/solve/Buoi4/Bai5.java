import java.util.*;

public class Bai5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        sc.nextLine();
        while (T-- > 0) {
            int N = Integer.parseInt(sc.nextLine());
            String[] tokens = sc.nextLine().trim().split("\\s+");
            Stack<Long> st = new Stack<>();
            for (int i = N - 1; i >= 0; i--) {
                String s = tokens[i];
                if (isOperator(s)) {
                    long a = st.pop();
                    long b = st.pop();
                    st.push(calc(s, a, b));
                } else {
                    st.push(Long.parseLong(s));
                }
            }
            System.out.println(st.pop());
        }
    }

    static boolean isOperator(String s) {
        return s.equals("+") || s.equals("-") || s.equals("*") || s.equals("/") || s.equals("%") || s.equals("^");
    }

    static long calc(String op, long a, long b) {
        switch (op) {
            case "+":
                return a + b;
            case "-":
                return a - b;
            case "*":
                return a * b;
            case "/":
                return a / b;
            default:
                return 0;
        }
    }
}
