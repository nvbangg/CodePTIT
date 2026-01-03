import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.util.List;

public class FormSinhVien extends JFrame {
    private JTable table;
    private DefaultTableModel tableModel;
    private JTextField txtHoTen, txtDienThoai, txtLop, txtTimKiem;
    private List<SinhVien> dsSinhVien;
    private JButton btnNhap, btnSua;
    private int currentEditIndex = -1;

    public FormSinhVien() {
        setTitle("Quản lý Sinh viên");
        setSize(800, 600);
        setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        setLocationRelativeTo(null);

        dsSinhVien = DataManager.loadSinhVien();

        JPanel pnlInput = new JPanel(new GridLayout(3, 2, 10, 10));
        pnlInput.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));

        pnlInput.add(new JLabel("Họ tên:"));
        txtHoTen = new JTextField();
        pnlInput.add(txtHoTen);

        pnlInput.add(new JLabel("Điện thoại:"));
        txtDienThoai = new JTextField();
        pnlInput.add(txtDienThoai);

        pnlInput.add(new JLabel("Lớp:"));
        txtLop = new JTextField();
        pnlInput.add(txtLop);

        JPanel pnlButton = new JPanel(new FlowLayout());
        btnNhap = new JButton("Nhập");
        btnSua = new JButton("Sửa");
        pnlButton.add(btnNhap);
        pnlButton.add(btnSua);

        JPanel pnlSearch = new JPanel(new FlowLayout());
        pnlSearch.add(new JLabel("Tìm kiếm (họ tên/SĐT):"));
        txtTimKiem = new JTextField(20);
        JButton btnTimKiem = new JButton("Tìm kiếm");
        JButton btnHienThiTatCa = new JButton("Hiển thị tất cả");
        pnlSearch.add(txtTimKiem);
        pnlSearch.add(btnTimKiem);
        pnlSearch.add(btnHienThiTatCa);

        String[] columns = { "Mã SV", "Họ tên", "Điện thoại", "Lớp" };
        tableModel = new DefaultTableModel(columns, 0);
        table = new JTable(tableModel);
        JScrollPane scrollPane = new JScrollPane(table);

        table.getSelectionModel().addListSelectionListener(e -> {
            if (!e.getValueIsAdjusting()) {
                int row = table.getSelectedRow();
                if (row != -1) {
                    currentEditIndex = row;
                    txtHoTen.setText((String) table.getValueAt(row, 1));
                    txtDienThoai.setText((String) table.getValueAt(row, 2));
                    txtLop.setText((String) table.getValueAt(row, 3));
                }
            }
        });

        JPanel pnlTop = new JPanel(new BorderLayout());
        pnlTop.add(pnlInput, BorderLayout.CENTER);
        pnlTop.add(pnlButton, BorderLayout.SOUTH);

        add(pnlTop, BorderLayout.NORTH);
        add(scrollPane, BorderLayout.CENTER);
        add(pnlSearch, BorderLayout.SOUTH);

        btnNhap.addActionListener(e -> themSinhVien());
        btnSua.addActionListener(e -> suaSinhVien());
        btnTimKiem.addActionListener(e -> timKiem());
        btnHienThiTatCa.addActionListener(e -> loadDataToTable());

        loadDataToTable();
    }

    private void themSinhVien() {
        String hoTen = txtHoTen.getText().trim();
        String dienThoai = txtDienThoai.getText().trim();
        String lop = txtLop.getText().trim();

        if (hoTen.isEmpty()) {
            JOptionPane.showMessageDialog(this, "Vui lòng nhập họ tên!");
            return;
        }
        if (dienThoai.isEmpty() || !dienThoai.matches("\\d{10}")) {
            JOptionPane.showMessageDialog(this, "Số điện thoại phải là 10 chữ số!");
            return;
        }
        if (lop.isEmpty()) {
            JOptionPane.showMessageDialog(this, "Vui lòng nhập lớp!");
            return;
        }

        int maSV = DataManager.getNextMaSV();
        SinhVien sv = new SinhVien(maSV, hoTen, dienThoai, lop);
        dsSinhVien.add(sv);
        DataManager.saveSinhVien(dsSinhVien);

        loadDataToTable();
        clearInputs();
        JOptionPane.showMessageDialog(this, "Thêm sinh viên thành công!");
    }

    private void suaSinhVien() {
        if (currentEditIndex == -1) {
            JOptionPane.showMessageDialog(this, "Vui lòng chọn sinh viên cần sửa!");
            return;
        }

        String hoTen = txtHoTen.getText().trim();
        String dienThoai = txtDienThoai.getText().trim();
        String lop = txtLop.getText().trim();

        if (hoTen.isEmpty()) {
            JOptionPane.showMessageDialog(this, "Vui lòng nhập họ tên!");
            return;
        }
        if (dienThoai.isEmpty() || !dienThoai.matches("\\d{10}")) {
            JOptionPane.showMessageDialog(this, "Số điện thoại phải là 10 chữ số!");
            return;
        }
        if (lop.isEmpty()) {
            JOptionPane.showMessageDialog(this, "Vui lòng nhập lớp!");
            return;
        }

        SinhVien sv = dsSinhVien.get(currentEditIndex);
        sv.setHoTen(hoTen);
        sv.setDienThoai(dienThoai);
        sv.setLop(lop);
        DataManager.saveSinhVien(dsSinhVien);

        loadDataToTable();
        clearInputs();
        currentEditIndex = -1;
        JOptionPane.showMessageDialog(this, "Sửa sinh viên thành công!");
    }

    private void timKiem() {
        String keyword = txtTimKiem.getText().trim().toLowerCase();
        if (keyword.isEmpty()) {
            JOptionPane.showMessageDialog(this, "Vui lòng nhập từ khóa tìm kiếm!");
            return;
        }

        tableModel.setRowCount(0);
        for (SinhVien sv : dsSinhVien) {
            if (sv.getHoTen().toLowerCase().contains(keyword) ||
                    sv.getDienThoai().contains(keyword)) {
                tableModel.addRow(new Object[] { sv.getMaSV(), sv.getHoTen(), sv.getDienThoai(), sv.getLop() });
            }
        }
    }

    private void loadDataToTable() {
        tableModel.setRowCount(0);
        for (SinhVien sv : dsSinhVien) {
            tableModel.addRow(new Object[] { sv.getMaSV(), sv.getHoTen(), sv.getDienThoai(), sv.getLop() });
        }
    }

    private void clearInputs() {
        txtHoTen.setText("");
        txtDienThoai.setText("");
        txtLop.setText("");
        currentEditIndex = -1;
        table.clearSelection();
    }
}
