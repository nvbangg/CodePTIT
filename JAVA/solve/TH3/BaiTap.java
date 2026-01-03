public class BaiTap {
    private int maBT;
    private String tenBT;
    private String kieuBT;
    private int tongThoiGian;

    public BaiTap(int maBT, String tenBT, String kieuBT, int tongThoiGian) {
        this.maBT = maBT;
        this.tenBT = tenBT;
        this.kieuBT = kieuBT;
        this.tongThoiGian = tongThoiGian;
    }

    public int getMaBT() {
        return maBT;
    }

    public void setMaBT(int maBT) {
        this.maBT = maBT;
    }

    public String getTenBT() {
        return tenBT;
    }

    public void setTenBT(String tenBT) {
        this.tenBT = tenBT;
    }

    public String getKieuBT() {
        return kieuBT;
    }

    public void setKieuBT(String kieuBT) {
        this.kieuBT = kieuBT;
    }

    public int getTongThoiGian() {
        return tongThoiGian;
    }

    public void setTongThoiGian(int tongThoiGian) {
        this.tongThoiGian = tongThoiGian;
    }

    public String toCSV() {
        return maBT + "," + tenBT + "," + kieuBT + "," + tongThoiGian;
    }

    public static BaiTap fromCSV(String csv) {
        String[] parts = csv.split(",");
        return new BaiTap(Integer.parseInt(parts[0]), parts[1], parts[2], Integer.parseInt(parts[3]));
    }
}
