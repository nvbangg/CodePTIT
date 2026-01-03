public class PhanCong {
    private int maSV;
    private int maBT;
    private int soNgayThamGia;
    private String viTriCongViec;

    public PhanCong(int maSV, int maBT, int soNgayThamGia, String viTriCongViec) {
        this.maSV = maSV;
        this.maBT = maBT;
        this.soNgayThamGia = soNgayThamGia;
        this.viTriCongViec = viTriCongViec;
    }

    public int getMaSV() {
        return maSV;
    }

    public void setMaSV(int maSV) {
        this.maSV = maSV;
    }

    public int getMaBT() {
        return maBT;
    }

    public void setMaBT(int maBT) {
        this.maBT = maBT;
    }

    public int getSoNgayThamGia() {
        return soNgayThamGia;
    }

    public void setSoNgayThamGia(int soNgayThamGia) {
        this.soNgayThamGia = soNgayThamGia;
    }

    public String getViTriCongViec() {
        return viTriCongViec;
    }

    public void setViTriCongViec(String viTriCongViec) {
        this.viTriCongViec = viTriCongViec;
    }

    public String toCSV() {
        return maSV + "," + maBT + "," + soNgayThamGia + "," + viTriCongViec;
    }

    public static PhanCong fromCSV(String csv) {
        String[] parts = csv.split(",");
        return new PhanCong(Integer.parseInt(parts[0]), Integer.parseInt(parts[1]),
                Integer.parseInt(parts[2]), parts[3]);
    }
}
