import java.util.*;

class CN {
    String ma, ten;
    int gio, phut;

    CN(String ma, String ten, String vao, String ra) {
        this.ma = ma;
        this.ten = ten;
        String[] v = vao.split(":"), r = ra.split(":");
        int minV = Integer.parseInt(v[0]) * 60 + Integer.parseInt(v[1]);
        int minR = Integer.parseInt(r[0]) * 60 + Integer.parseInt(r[1]);
        int work = minR - minV - 60;
        this.gio = work / 60;
        this.phut = work % 60;
    }
}

public class Bai3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        List<CN> a = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String ma = sc.nextLine();
            String ten = sc.nextLine();
            String vao = sc.nextLine();
            String ra = sc.nextLine();
            a.add(new CN(ma, ten, vao, ra));
        }
        a.sort((x, y) -> {
            int t1 = x.gio * 60 + x.phut, t2 = y.gio * 60 + y.phut;
            if (t1 != t2)
                return t2 - t1;
            return x.ma.compareTo(y.ma);
        });
        for (CN x : a) {
            String tt = (x.gio * 60 + x.phut >= 480) ? "DU" : "THIEU";
            System.out.printf("%s %s %d gio %d phut %s\n", x.ma, x.ten, x.gio, x.phut, tt);
        }
        sc.close();
    }
}