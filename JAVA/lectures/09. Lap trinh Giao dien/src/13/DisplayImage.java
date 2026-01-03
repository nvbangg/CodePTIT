import java.awt.*;
import javax.swing.*;

public class DisplayImage extends JFrame {
  public DisplayImage() {
    add(new ImageCanvas());
  }

  public static void main(String[] args) {
    JFrame frame = new DisplayImage();
    frame.setTitle("DisplayImage");
    frame.setSize(300, 300);
    frame.setLocationRelativeTo(null); // Center the frame
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setVisible(true);
  }
}

class ImageCanvas extends JPanel {
  ImageIcon imageIcon = new ImageIcon("image/us.gif");
  Image image = imageIcon.getImage();

  /** Draw image on the panel */
  public void paintComponent(Graphics g) {
    super.paintComponent(g);

    if (image != null) {
      g.drawImage(image, 0, 0, getWidth(), getHeight(), this);
    }
  }
}
