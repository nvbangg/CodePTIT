import javax.swing.JFrame;
import javax.swing.JPanel;
import java.awt.Color;
import java.awt.Graphics;

public class DrawOvals extends JFrame {
  public DrawOvals() {
    setTitle("DrawOvals");
    getContentPane().add(new OvalsPanel());
  }

  /** Main method */
  public static void main(String[] args) {
    DrawOvals frame = new DrawOvals();
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setSize(250, 250);
    frame.setVisible(true);
  }
}

// The class for drawing the ovals on a panel
class OvalsPanel extends JPanel {
  protected void paintComponent(Graphics g) {
    super.paintComponent(g);

    g.drawOval(5, 5, getWidth() / 2 - 10, getHeight() / 2 - 10);
    g.setColor(Color.red);
    g.drawOval(getWidth() / 2 + 5, 5, getWidth() / 2 - 10,
      getHeight() / 2 - 10);
    g.setColor(Color.yellow);
    g.fillOval(5, getHeight() / 2 + 5, getWidth() / 2 - 10,
      getHeight() / 2 - 10);
    g.setColor(Color.orange);
    g.fillOval(getWidth() / 2 + 5, getHeight() / 2 + 5,
      getWidth() / 2 - 10, getHeight() / 2 - 10);
  }
}
