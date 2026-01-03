import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ArrayList<Time> a = new ArrayList<>();
        while (t-- > 0)
            a.add(new Time(sc.nextInt(), sc.nextInt(), sc.nextInt()));
        Collections.sort(a);
        for (Time i : a)
            System.out.println(i);
    }
}
