import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class LabelDemo extends JFrame implements ActionListener {
  final int NUMBER_OF_IMAGES = 9;

  // Declare an ImageIcon array. There are total 9 images
  private ImageIcon[] imageIcons = new ImageIcon[NUMBER_OF_IMAGES];

  // The current image index
  private int currentIndex = 0;

  // Buttons for browsing images
  private JButton jbtPrior, jbtNext;

  // Label for displaying images
  private JLabel jlblImageViewer = new JLabel();

  /** Main Method */
  public static void main(String[] args) {
    LabelDemo frame = new LabelDemo();
    frame.setTitle("LabelDemo");
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setSize(500, 500);
    frame.setVisible(true);
  }

  /** Default Constructor */
  public LabelDemo() {
    // Load images into imageIcon array
    for (int i = 1; i <= NUMBER_OF_IMAGES; i++) {
      imageIcons[i - 1] = new ImageIcon("image/flag" + i + ".gif");
    }

    // Show the first image
    jlblImageViewer.setIcon(imageIcons[currentIndex]);

    // Set center alignment
    jlblImageViewer.setHorizontalAlignment(SwingConstants.CENTER);
    jlblImageViewer.setVerticalAlignment(SwingConstants.CENTER);

    // Panel jpButtons to hold two buttons for browsing images
    JPanel jpButtons = new JPanel();
    jpButtons.add(jbtPrior = new JButton());
    jbtPrior.setIcon(new ImageIcon("image/left.gif"));
    jpButtons.add(jbtNext = new JButton());
    jbtNext.setIcon(new ImageIcon("image/right.gif"));

    // Add jpButton and the label to the frame
    getContentPane().add(jlblImageViewer, BorderLayout.CENTER);
    getContentPane().add(jpButtons, BorderLayout.SOUTH);

    // Register listeners
    jbtPrior.addActionListener(this);
    jbtNext.addActionListener(this);
  }

  /** Handle ActionEvent from buttons */
  public void actionPerformed(ActionEvent e) {
    if (e.getSource() == jbtPrior) {
      // Make sure index is nonnegative
      if (currentIndex == 0) currentIndex = NUMBER_OF_IMAGES;
      currentIndex = (currentIndex - 1) % NUMBER_OF_IMAGES;
      jlblImageViewer.setIcon(imageIcons[currentIndex]);
    }
    else if (e.getSource() == jbtNext) {
      currentIndex = (currentIndex + 1) % NUMBER_OF_IMAGES;
      jlblImageViewer.setIcon(imageIcons[currentIndex]);
    }
  }
}