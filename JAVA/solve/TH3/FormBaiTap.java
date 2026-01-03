import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.util.List;

public class FormBaiTap extends JFrame {
    private JTable table;
    private DefaultTableModel tableModel;
    private JTextField txtTenBT, txtTongThoiGian;
    private JComboBox<String> cboKieuBT;
    private List<BaiTap> dsBaiTap;

    public FormBaiTap() {
        setTitle("Quản lý Bài tập nhóm");
        setSize(700, 500);
        setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        setLocationRelativeTo(null);

        dsBaiTap = DataManager.loadBaiTap();

        JPanel pnlInput = new JPanel(new GridLayout(3, 2, 10, 10));
        pnlInput.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));

        pnlInput.add(new JLabel("Tên bài tập:"));
        txtTenBT = new JTextField();
        pnlInput.add(txtTenBT);

        pnlInput.add(new JLabel("Kiểu bài tập:"));
        cboKieuBT = new JComboBox<>(new String[] { "BT nhỏ", "BT lớn", "BT chuyên đề" });
        pnlInput.add(cboKieuBT);

        pnlInput.add(new JLabel("Tổng thời gian (ngày):"));
        txtTongThoiGian = new JTextField();
        pnlInput.add(txtTongThoiGian);

        JPanel pnlButton = new JPanel(new FlowLayout());
        JButton btnNhap = new JButton("Nhập");
        JButton btnXoa = new JButton("Xóa");
        pnlButton.add(btnNhap);
        pnlButton.add(btnXoa);

        String[] columns = { "Mã BT", "Tên BT", "Kiểu BT", "Tổng thời gian" };
        tableModel = new DefaultTableModel(columns, 0);
        table = new JTable(tableModel);
        JScrollPane scrollPane = new JScrollPane(table);

        JPanel pnlTop = new JPanel(new BorderLayout());
        pnlTop.add(pnlInput, BorderLayout.CENTER);
        pnlTop.add(pnlButton, BorderLayout.SOUTH);

        add(pnlTop, BorderLayout.NORTH);
        add(scrollPane, BorderLayout.CENTER);

        btnNhap.addActionListener(e -> themBaiTap());
        btnXoa.addActionListener(e -> xoaBaiTap());

        loadDataToTable();
    }

    private void themBaiTap() {
        String tenBT = txtTenBT.getText().trim();
        String kieuBT = (String) cboKieuBT.getSelectedItem();
        String thoiGianStr = txtTongThoiGian.getText().trim();

        if (tenBT.isEmpty()) {
            JOptionPane.showMessageDialog(this, "Vui lòng nhập tên bài tập!");
            return;
        }

        int tongThoiGian;
        try {
            tongThoiGian = Integer.parseInt(thoiGianStr);
            if (tongThoiGian <= 0) {
                JOptionPane.showMessageDialog(this, "Tổng thời gian phải lớn hơn 0!");
                return;
            }
        } catch (NumberFormatException ex) {
            JOptionPane.showMessageDialog(this, "Tổng thời gian phải là số nguyên!");
            return;
        }

        int maBT = DataManager.getNextMaBT();
        BaiTap bt = new BaiTap(maBT, tenBT, kieuBT, tongThoiGian);
        dsBaiTap.add(bt);
        DataManager.saveBaiTap(dsBaiTap);

        loadDataToTable();
        clearInputs();
        JOptionPane.showMessageDialog(this, "Thêm bài tập thành công!");
    }

    private void xoaBaiTap() {
        int row = table.getSelectedRow();
        if (row == -1) {
            JOptionPane.showMessageDialog(this, "Vui lòng chọn bài tập cần xóa!");
            return;
        }

        int confirm = JOptionPane.showConfirmDialog(this, "Bạn có chắc muốn xóa?", "Xác nhận",
                JOptionPane.YES_NO_OPTION);
        if (confirm == JOptionPane.YES_OPTION) {
            dsBaiTap.remove(row);
            DataManager.saveBaiTap(dsBaiTap);
            loadDataToTable();
            JOptionPane.showMessageDialog(this, "Xóa thành công!");
        }
    }

    private void loadDataToTable() {
        tableModel.setRowCount(0);
        for (BaiTap bt : dsBaiTap) {
            tableModel.addRow(new Object[] { bt.getMaBT(), bt.getTenBT(), bt.getKieuBT(), bt.getTongThoiGian() });
        }
    }

    private void clearInputs() {
        txtTenBT.setText("");
        txtTongThoiGian.setText("");
        cboKieuBT.setSelectedIndex(0);
    }
}
