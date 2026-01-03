import java.io.*;
import java.util.*;

public class DataManager {
    private static final String BAITAP_FILE = "baitap.csv";
    private static final String SINHVIEN_FILE = "sinhvien.csv";
    private static final String PHANCONG_FILE = "phancong.csv";

    public static List<BaiTap> loadBaiTap() {
        List<BaiTap> list = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(BAITAP_FILE))) {
            String line;
            while ((line = br.readLine()) != null) {
                list.add(BaiTap.fromCSV(line));
            }
        } catch (IOException e) {
        }
        return list;
    }

    public static void saveBaiTap(List<BaiTap> list) {
        try (PrintWriter pw = new PrintWriter(new FileWriter(BAITAP_FILE))) {
            for (BaiTap bt : list) {
                pw.println(bt.toCSV());
            }
        } catch (IOException e) {
        }
    }

    public static int getNextMaBT() {
        List<BaiTap> list = loadBaiTap();
        if (list.isEmpty())
            return 100;
        int max = 100;
        for (BaiTap bt : list) {
            if (bt.getMaBT() > max)
                max = bt.getMaBT();
        }
        return max + 1;
    }

    public static List<SinhVien> loadSinhVien() {
        List<SinhVien> list = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(SINHVIEN_FILE))) {
            String line;
            while ((line = br.readLine()) != null) {
                list.add(SinhVien.fromCSV(line));
            }
        } catch (IOException e) {
        }
        return list;
    }

    public static void saveSinhVien(List<SinhVien> list) {
        try (PrintWriter pw = new PrintWriter(new FileWriter(SINHVIEN_FILE))) {
            for (SinhVien sv : list) {
                pw.println(sv.toCSV());
            }
        } catch (IOException e) {
        }
    }

    public static int getNextMaSV() {
        List<SinhVien> list = loadSinhVien();
        if (list.isEmpty())
            return 10000;
        int max = 10000;
        for (SinhVien sv : list) {
            if (sv.getMaSV() > max)
                max = sv.getMaSV();
        }
        return max + 1;
    }

    public static List<PhanCong> loadPhanCong() {
        List<PhanCong> list = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(PHANCONG_FILE))) {
            String line;
            while ((line = br.readLine()) != null) {
                list.add(PhanCong.fromCSV(line));
            }
        } catch (IOException e) {
        }
        return list;
    }

    public static void savePhanCong(List<PhanCong> list) {
        try (PrintWriter pw = new PrintWriter(new FileWriter(PHANCONG_FILE))) {
            for (PhanCong pc : list) {
                pw.println(pc.toCSV());
            }
        } catch (IOException e) {
        }
    }
}
