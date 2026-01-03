import java.io.*;
import java.util.*;

class KH {
    String ma, ten, gt, ns, dc;
    static int cnt = 1;

    KH(String ten, String gt, String ns, String dc) {
        this.ma = String.format("KH%03d", cnt++);
        this.ten = ten;
        this.gt = gt;
        this.ns = ns;
        this.dc = dc;
    }
}

class MH {
    String ma, ten, dv;
    int gm, gb;
    static int cnt = 1;

    MH(String ten, String dv, int gm, int gb) {
        this.ma = String.format("MH%03d", cnt++);
        this.ten = ten;
        this.dv = dv;
        this.gm = gm;
        this.gb = gb;
    }
}

class HD {
    String ma;
    KH kh;
    MH mh;
    int sl;
    static int cnt = 1;

    HD(KH kh, MH mh, int sl) {
        this.ma = String.format("HD%03d", cnt++);
        this.kh = kh;
        this.mh = mh;
        this.sl = sl;
    }

    int tt() {
        return mh.gb * sl;
    }
}

public class Bai6 {
    public static void main(String[] args) throws Exception {
        Scanner skh = new Scanner(new File("KH.in"));
        int n = Integer.parseInt(skh.nextLine());
        ArrayList<KH> dskh = new ArrayList<>();
        for (int i = 0; i < n; i++)
            dskh.add(new KH(skh.nextLine(), skh.nextLine(), skh.nextLine(), skh.nextLine()));
        skh.close();

        Scanner smh = new Scanner(new File("MH.in"));
        int m = Integer.parseInt(smh.nextLine());
        ArrayList<MH> dsmh = new ArrayList<>();
        for (int i = 0; i < m; i++)
            dsmh.add(new MH(smh.nextLine(), smh.nextLine(), Integer.parseInt(smh.nextLine()),
                    Integer.parseInt(smh.nextLine())));
        smh.close();

        Scanner shd = new Scanner(new File("HD.in"));
        int k = Integer.parseInt(shd.nextLine());
        ArrayList<HD> dshd = new ArrayList<>();
        for (int i = 0; i < k; i++) {
            String khMa = shd.next();
            String mhMa = shd.next();
            int sl = shd.nextInt();
            KH kh = dskh.stream().filter(x -> x.ma.equals(khMa)).findFirst().get();
            MH mh = dsmh.stream().filter(x -> x.ma.equals(mhMa)).findFirst().get();
            dshd.add(new HD(kh, mh, sl));
        }
        shd.close();

        for (HD x : dshd)
            System.out.printf("%s %s %s %s %s %d %d %d %d\n",
                    x.ma, x.kh.ten, x.kh.dc, x.mh.ten, x.mh.dv, x.mh.gm, x.mh.gb, x.sl, x.tt());
    }
}
