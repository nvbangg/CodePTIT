import javax.swing.*;
import java.awt.*;

public class Main extends JFrame {

    public Main() {
        setTitle("Hệ thống Quản lý Nhóm Sinh viên");
        setSize(500, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        JPanel panel = new JPanel(new GridLayout(4, 1, 10, 10));
        panel.setBorder(BorderFactory.createEmptyBorder(20, 50, 20, 50));

        JLabel lblTitle = new JLabel("QUẢN LÝ NHÓM SINH VIÊN", JLabel.CENTER);
        lblTitle.setFont(new Font("Arial", Font.BOLD, 18));
        panel.add(lblTitle);

        JButton btnBaiTap = new JButton("Quản lý Bài tập nhóm");
        JButton btnSinhVien = new JButton("Quản lý Sinh viên");
        JButton btnPhanCong = new JButton("Phân công bài tập");

        btnBaiTap.setFont(new Font("Arial", Font.PLAIN, 14));
        btnSinhVien.setFont(new Font("Arial", Font.PLAIN, 14));
        btnPhanCong.setFont(new Font("Arial", Font.PLAIN, 14));

        panel.add(btnBaiTap);
        panel.add(btnSinhVien);
        panel.add(btnPhanCong);

        add(panel);

        btnBaiTap.addActionListener(e -> {
            FormBaiTap form = new FormBaiTap();
            form.setVisible(true);
        });

        btnSinhVien.addActionListener(e -> {
            FormSinhVien form = new FormSinhVien();
            form.setVisible(true);
        });

        btnPhanCong.addActionListener(e -> {
            FormPhanCong form = new FormPhanCong();
            form.setVisible(true);
        });
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            Main app = new Main();
            app.setVisible(true);
        });
    }
}
