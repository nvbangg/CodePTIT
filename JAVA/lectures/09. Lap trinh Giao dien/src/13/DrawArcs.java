import java.awt.*;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.Timer;
import testui.ClockAnimation;

public class DrawArcs extends JFrame {
  public DrawArcs() {
    setTitle("DrawArcs");
    add(new ArcsPanel());
  }

  /** Main method */
  public static void main(String[] args) {
    DrawArcs frame = new DrawArcs();
    frame.setLocationRelativeTo(null); // Center the frame
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setSize(250, 300);
    frame.setBackground(Color.blue);
    frame.setVisible(true);
  }
}

// The class for drawing arcs on a panel
class ArcsPanel extends JPanel {
  // Draw four blazes of a fan
  int a=0;
  public ArcsPanel(){
       Timer timer = new Timer(10, new TimerListener());
       timer.start();
  }
  private class TimerListener implements ActionListener {
    /** Handle the action event */
    public void actionPerformed(ActionEvent e) {
      // Set new time and repaint the clock to display current time
      a=a+2;
      repaint();
    }
  }
  protected void paintComponent(Graphics g) {
    super.paintComponent(g);

    int xCenter = getWidth() / 2;
    int yCenter = getHeight() / 2;
    int radius = (int)(Math.min(getWidth(), getHeight()) * 0.4);

    int x = xCenter - radius;
    int y = yCenter - radius;

    g.setColor(Color.blue);
    g.fillArc(x, y, 2 * radius, 2 * radius, a, 30);
    g.fillArc(x, y, 2 * radius, 2 * radius, a+90, 30);
    g.fillArc(x, y, 2 * radius, 2 * radius, a+180, 30);
    g.fillArc(x, y, 2 * radius, 2 * radius, a+270, 30);
  }
}
