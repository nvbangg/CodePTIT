import java.util.ArrayList;
import java.util.Scanner;

public class LopUser {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = Integer.parseInt(sc.nextLine());
        ArrayList<User> users = new ArrayList<>();
        ArrayList<Integer> counts = new ArrayList<>();

        for (int i = 0; i < N; i++) {
            String u = sc.next();
            String p = sc.next();
            users.add(new User(u, p));
            counts.add(0); 
        }

        int M = Integer.parseInt(sc.next());
        for (int i = 0; i < M; i++) {
            String u = sc.next();
            String p = sc.next();
            for (int j = 0; j < users.size(); j++) {
                User user = users.get(j);
                if (user.getUsername().equals(u) && user.getPassword().equals(p)) {
                    counts.set(j, counts.get(j) + 1);
                }
            }
        }

        for (int i = 0; i < counts.size(); i++) {
            System.out.print(counts.get(i) + " ");
        }

    }
}
