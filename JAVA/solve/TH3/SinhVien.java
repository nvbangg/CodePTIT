public class SinhVien {
    private int maSV;
    private String hoTen;
    private String dienThoai;
    private String lop;

    public SinhVien(int maSV, String hoTen, String dienThoai, String lop) {
        this.maSV = maSV;
        this.hoTen = hoTen;
        this.dienThoai = dienThoai;
        this.lop = lop;
    }

    public int getMaSV() {
        return maSV;
    }

    public void setMaSV(int maSV) {
        this.maSV = maSV;
    }

    public String getHoTen() {
        return hoTen;
    }

    public void setHoTen(String hoTen) {
        this.hoTen = hoTen;
    }

    public String getDienThoai() {
        return dienThoai;
    }

    public void setDienThoai(String dienThoai) {
        this.dienThoai = dienThoai;
    }

    public String getLop() {
        return lop;
    }

    public void setLop(String lop) {
        this.lop = lop;
    }

    public String toCSV() {
        return maSV + "," + hoTen + "," + dienThoai + "," + lop;
    }

    public static SinhVien fromCSV(String csv) {
        String[] parts = csv.split(",");
        return new SinhVien(Integer.parseInt(parts[0]), parts[1], parts[2], parts[3]);
    }
}
