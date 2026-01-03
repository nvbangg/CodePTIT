import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class AnimationDemo extends JFrame {
  public AnimationDemo() {
    // Create a MovingMessagePanel for displaying a moving message
    add(new MovingMessagePanel("message moving?"));
  }

  /** Main method */
  public static void main(String[] args) {
    AnimationDemo frame = new AnimationDemo();
    frame.setTitle("AnimationDemo");
    frame.setLocationRelativeTo(null); // Center the frame
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setSize(280, 100);
    frame.setVisible(true);
  }

  // Displaying a moving message
  static class MovingMessagePanel extends JPanel {
    private String message = "Welcome to Java";
    private int xCoordinate = 0;
    private int yCoordinate = 20;

    public MovingMessagePanel(String message) {
      this.message = message;

      // Create a timer
      Timer timer = new Timer(1000, new TimerListener());
      timer.start();
    }

    /** Paint message */
    public void paintComponent(Graphics g) {
      super.paintComponent(g);

      if (xCoordinate > getWidth()) {
        xCoordinate = -20;
      }
      xCoordinate += 5;
      g.drawString(message, xCoordinate, yCoordinate);
    }

    class TimerListener implements ActionListener {
      /** Handle ActionEvent */
      public void actionPerformed(ActionEvent e) {
        repaint();
      }
    }
  }
}
