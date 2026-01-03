import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.util.List;

public class FormPhanCong extends JFrame {
    private JTable table;
    private DefaultTableModel tableModel;
    private JComboBox<String> cboSinhVien, cboBaiTap, cboTimSV, cboTimBT;
    private JTextField txtSoNgay, txtViTri, txtTimSoNgay;
    private List<PhanCong> dsPhanCong;
    private List<SinhVien> dsSinhVien;
    private List<BaiTap> dsBaiTap;

    public FormPhanCong() {
        setTitle("Phân công bài tập nhóm");
        setSize(1000, 600);
        setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        setLocationRelativeTo(null);

        dsPhanCong = DataManager.loadPhanCong();
        dsSinhVien = DataManager.loadSinhVien();
        dsBaiTap = DataManager.loadBaiTap();

        JPanel pnlInput = new JPanel(new GridLayout(4, 2, 10, 10));
        pnlInput.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));

        pnlInput.add(new JLabel("Sinh viên:"));
        cboSinhVien = new JComboBox<>();
        loadComboSinhVien();
        pnlInput.add(cboSinhVien);

        pnlInput.add(new JLabel("Bài tập:"));
        cboBaiTap = new JComboBox<>();
        loadComboBaiTap();
        pnlInput.add(cboBaiTap);

        pnlInput.add(new JLabel("Số ngày tham gia:"));
        txtSoNgay = new JTextField();
        pnlInput.add(txtSoNgay);

        pnlInput.add(new JLabel("Vị trí công việc:"));
        txtViTri = new JTextField();
        pnlInput.add(txtViTri);

        JPanel pnlButton = new JPanel(new FlowLayout());
        JButton btnNhap = new JButton("Nhập");
        pnlButton.add(btnNhap);

        JPanel pnlSearch = new JPanel(new GridLayout(3, 1, 5, 5));
        pnlSearch.setBorder(BorderFactory.createTitledBorder("Tìm kiếm"));

        JPanel pnlSearch1 = new JPanel(new FlowLayout());
        pnlSearch1.add(new JLabel("Tìm theo số ngày:"));
        txtTimSoNgay = new JTextField(10);
        JButton btnTimSoNgay = new JButton("Tìm");
        pnlSearch1.add(txtTimSoNgay);
        pnlSearch1.add(btnTimSoNgay);

        JPanel pnlSearch2 = new JPanel(new FlowLayout());
        pnlSearch2.add(new JLabel("Tìm theo sinh viên:"));
        cboTimSV = new JComboBox<>();
        loadComboTimSinhVien();
        JButton btnTimSV = new JButton("Tìm");
        pnlSearch2.add(cboTimSV);
        pnlSearch2.add(btnTimSV);

        JPanel pnlSearch3 = new JPanel(new FlowLayout());
        pnlSearch3.add(new JLabel("Tìm theo bài tập:"));
        cboTimBT = new JComboBox<>();
        loadComboTimBaiTap();
        pnlSearch3.add(cboTimBT);
        pnlSearch3.add(new JLabel("Sinh viên:"));
        JComboBox<String> cboTimSV2 = new JComboBox<>();
        loadComboTimSinhVien2(cboTimSV2);
        pnlSearch3.add(cboTimSV2);
        JButton btnTimBTSV = new JButton("Tìm");
        JButton btnHienThiTatCa = new JButton("Hiển thị tất cả");
        pnlSearch3.add(btnTimBTSV);
        pnlSearch3.add(btnHienThiTatCa);

        pnlSearch.add(pnlSearch1);
        pnlSearch.add(pnlSearch2);
        pnlSearch.add(pnlSearch3);

        String[] columns = { "Mã SV", "Họ tên", "Mã BT", "Tên BT", "Số ngày", "Vị trí công việc" };
        tableModel = new DefaultTableModel(columns, 0);
        table = new JTable(tableModel);
        JScrollPane scrollPane = new JScrollPane(table);

        JPanel pnlTop = new JPanel(new BorderLayout());
        pnlTop.add(pnlInput, BorderLayout.CENTER);
        pnlTop.add(pnlButton, BorderLayout.SOUTH);

        add(pnlTop, BorderLayout.NORTH);
        add(scrollPane, BorderLayout.CENTER);
        add(pnlSearch, BorderLayout.SOUTH);

        btnNhap.addActionListener(e -> themPhanCong());
        btnTimSoNgay.addActionListener(e -> timTheoSoNgay());
        btnTimSV.addActionListener(e -> timTheoSinhVien());
        btnTimBTSV.addActionListener(e -> timTheoBaiTapVaSinhVien(cboTimSV2));
        btnHienThiTatCa.addActionListener(e -> loadDataToTable());

        loadDataToTable();
    }

    private void loadComboSinhVien() {
        cboSinhVien.removeAllItems();
        for (SinhVien sv : dsSinhVien) {
            cboSinhVien.addItem(sv.getMaSV() + " - " + sv.getHoTen());
        }
    }

    private void loadComboBaiTap() {
        cboBaiTap.removeAllItems();
        for (BaiTap bt : dsBaiTap) {
            cboBaiTap.addItem(bt.getMaBT() + " - " + bt.getTenBT());
        }
    }

    private void loadComboTimSinhVien() {
        cboTimSV.removeAllItems();
        cboTimSV.addItem("Tất cả");
        for (SinhVien sv : dsSinhVien) {
            cboTimSV.addItem(sv.getHoTen());
        }
    }

    private void loadComboTimBaiTap() {
        cboTimBT.removeAllItems();
        cboTimBT.addItem("Tất cả");
        for (BaiTap bt : dsBaiTap) {
            cboTimBT.addItem(bt.getTenBT());
        }
    }

    private void loadComboTimSinhVien2(JComboBox<String> cbo) {
        cbo.removeAllItems();
        cbo.addItem("Tất cả");
        for (SinhVien sv : dsSinhVien) {
            cbo.addItem(sv.getHoTen());
        }
    }

    private void themPhanCong() {
        if (cboSinhVien.getSelectedItem() == null || cboBaiTap.getSelectedItem() == null) {
            JOptionPane.showMessageDialog(this, "Vui lòng chọn sinh viên và bài tập!");
            return;
        }

        String svStr = (String) cboSinhVien.getSelectedItem();
        String btStr = (String) cboBaiTap.getSelectedItem();
        int maSV = Integer.parseInt(svStr.split(" - ")[0]);
        int maBT = Integer.parseInt(btStr.split(" - ")[0]);

        String viTri = txtViTri.getText().trim();
        if (viTri.isEmpty()) {
            JOptionPane.showMessageDialog(this, "Vui lòng nhập vị trí công việc!");
            return;
        }

        int soNgay;
        try {
            soNgay = Integer.parseInt(txtSoNgay.getText().trim());
            if (soNgay <= 0) {
                JOptionPane.showMessageDialog(this, "Số ngày phải lớn hơn 0!");
                return;
            }
        } catch (NumberFormatException ex) {
            JOptionPane.showMessageDialog(this, "Số ngày phải là số nguyên!");
            return;
        }

        BaiTap bt = null;
        for (BaiTap b : dsBaiTap) {
            if (b.getMaBT() == maBT) {
                bt = b;
                break;
            }
        }

        if (bt != null && soNgay > bt.getTongThoiGian()) {
            JOptionPane.showMessageDialog(this, "Số ngày tham gia không được lớn hơn tổng thời gian bài tập!");
            return;
        }

        for (PhanCong pc : dsPhanCong) {
            if (pc.getMaSV() == maSV && pc.getMaBT() == maBT &&
                    pc.getViTriCongViec().equalsIgnoreCase(viTri)) {
                JOptionPane.showMessageDialog(this, "Sinh viên đã được phân công bài tập này với vị trí này!");
                return;
            }
        }

        PhanCong pc = new PhanCong(maSV, maBT, soNgay, viTri);
        dsPhanCong.add(pc);
        DataManager.savePhanCong(dsPhanCong);

        loadDataToTable();
        clearInputs();
        JOptionPane.showMessageDialog(this, "Phân công thành công!");
    }

    private void timTheoSoNgay() {
        String soNgayStr = txtTimSoNgay.getText().trim();
        if (soNgayStr.isEmpty()) {
            JOptionPane.showMessageDialog(this, "Vui lòng nhập số ngày!");
            return;
        }

        try {
            int soNgay = Integer.parseInt(soNgayStr);
            tableModel.setRowCount(0);
            for (PhanCong pc : dsPhanCong) {
                if (pc.getSoNgayThamGia() == soNgay) {
                    addRowToTable(pc);
                }
            }
        } catch (NumberFormatException ex) {
            JOptionPane.showMessageDialog(this, "Số ngày phải là số nguyên!");
        }
    }

    private void timTheoSinhVien() {
        String hoTen = (String) cboTimSV.getSelectedItem();
        if (hoTen == null || hoTen.equals("Tất cả")) {
            loadDataToTable();
            return;
        }

        tableModel.setRowCount(0);
        for (PhanCong pc : dsPhanCong) {
            SinhVien sv = findSinhVien(pc.getMaSV());
            if (sv != null && sv.getHoTen().equals(hoTen)) {
                addRowToTable(pc);
            }
        }
    }

    private void timTheoBaiTapVaSinhVien(JComboBox<String> cboTimSV2) {
        String tenBT = (String) cboTimBT.getSelectedItem();
        String hoTen = (String) cboTimSV2.getSelectedItem();

        tableModel.setRowCount(0);
        for (PhanCong pc : dsPhanCong) {
            boolean matchBT = tenBT.equals("Tất cả");
            boolean matchSV = hoTen.equals("Tất cả");

            if (!matchBT) {
                BaiTap bt = findBaiTap(pc.getMaBT());
                if (bt != null && bt.getTenBT().equals(tenBT)) {
                    matchBT = true;
                }
            }

            if (!matchSV) {
                SinhVien sv = findSinhVien(pc.getMaSV());
                if (sv != null && sv.getHoTen().equals(hoTen)) {
                    matchSV = true;
                }
            }

            if (matchBT && matchSV) {
                addRowToTable(pc);
            }
        }
    }

    private void loadDataToTable() {
        tableModel.setRowCount(0);
        for (PhanCong pc : dsPhanCong) {
            addRowToTable(pc);
        }
    }

    private void addRowToTable(PhanCong pc) {
        SinhVien sv = findSinhVien(pc.getMaSV());
        BaiTap bt = findBaiTap(pc.getMaBT());

        String hoTen = sv != null ? sv.getHoTen() : "";
        String tenBT = bt != null ? bt.getTenBT() : "";

        tableModel.addRow(new Object[] { pc.getMaSV(), hoTen, pc.getMaBT(), tenBT,
                pc.getSoNgayThamGia(), pc.getViTriCongViec() });
    }

    private SinhVien findSinhVien(int maSV) {
        for (SinhVien sv : dsSinhVien) {
            if (sv.getMaSV() == maSV)
                return sv;
        }
        return null;
    }

    private BaiTap findBaiTap(int maBT) {
        for (BaiTap bt : dsBaiTap) {
            if (bt.getMaBT() == maBT)
                return bt;
        }
        return null;
    }

    private void clearInputs() {
        txtSoNgay.setText("");
        txtViTri.setText("");
        if (cboSinhVien.getItemCount() > 0)
            cboSinhVien.setSelectedIndex(0);
        if (cboBaiTap.getItemCount() > 0)
            cboBaiTap.setSelectedIndex(0);
    }
}
