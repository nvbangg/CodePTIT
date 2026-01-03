// DisplayImageApplet.java: Display an image on a panel in the applet
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.border.LineBorder;

public class DisplayImageApplet extends JApplet
  implements ActionListener {
  // The panel for displaying the image  private
  private ImagePanel imagePanel = new ImagePanel();

  // The text field for entering the name of the image file
  private JTextField jtfFilename = new JTextField(20);

  // The button for displaying the image
  private JButton jbtShow = new JButton("Show Image");

  /** Initialize the applet */
  public void init() {
    // Panel p1 to hold a text field and a button
    JPanel p1 = new JPanel();
    p1.setLayout(new BorderLayout());
    p1.add(new JLabel("Image Filename"), BorderLayout.WEST);
    p1.add(jtfFilename, BorderLayout.CENTER);
    p1.add(jbtShow, BorderLayout.EAST);

    // Place an ImagePanel object and p1 in the applet
    getContentPane().add(imagePanel, BorderLayout.CENTER);
    getContentPane().add(p1, BorderLayout.SOUTH);

    // Set line border on the image panel
    imagePanel.setBorder(new LineBorder(Color.black, 1));

    // Register listener
    jbtShow.addActionListener(this);
    jtfFilename.addActionListener(this);
  }

  /** Handle the ActionEvent */
  public void actionPerformed(ActionEvent e) {
    if ((e.getSource() instanceof JButton) ||
      (e.getSource() instanceof JTextField))
      displayImage();
  }

  /** Display image on the panel */
  private void displayImage() {
    // Retrieve image
    Image image = getImage(getCodeBase(),
      jtfFilename.getText().trim());

    // Show image in the panel
    imagePanel.showImage(image);
  }
}

// Define the panel for showing an image
class ImagePanel extends JPanel {
  // Image instance
  private Image image = null;

  /** Default constructor */
  public ImagePanel() {
    System.out.println("ERE");
  }

  /** Set image and show it */
  public void showImage(Image image) {
    this.image = image;
    repaint();
  }

  /** Draw image on the panel */
  public void paintComponent(Graphics g) {
    super.paintComponent(g);

    if (image != null)
      g.drawImage(image, 0, 0, getWidth(), getHeight(), this);
  }
}
