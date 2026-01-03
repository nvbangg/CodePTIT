import java.awt.*;
import javax.swing.*;

public class TextAreaDemo extends JFrame {
  // Declare and create a description panel
  private DescriptionPanel descriptionPanel = new DescriptionPanel();

  public static void main(String[] args) {
    TextAreaDemo frame = new TextAreaDemo();
    frame.pack();
    frame.setLocationRelativeTo(null); // Center the frame
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setTitle("TextAreaDemo");
    frame.setVisible(true);
  }

  public TextAreaDemo() {
    // Set title, text and image in the description panel
    descriptionPanel.setTitle("Canada");
    String description = "The Maple Leaf flag \n\n" +
      "The Canadian National Flag was adopted by the Canadian " +
      "Parliament on October 22, 1964 and was proclaimed into law " +
      "by Her Majesty Queen Elizabeth II (the Queen of Canada) on " +
      "February 15, 1965. The Canadian Flag (colloquially known " +
      "as The Maple Leaf Flag) is a red flag of the proportions " +
      "two by length and one by width, containing in its center a " +
      "white square, with a single red stylized eleven-point " +
      "mapleleaf centered in the white square.";
    descriptionPanel.setDescription(description);
    descriptionPanel.setImageIcon(new ImageIcon("image/ca.gif"));

    // Add the description panel to the frame
    setLayout(new BorderLayout());
    add(descriptionPanel, BorderLayout.CENTER);
  }
}

// Define a panel for displaying image and text
class DescriptionPanel extends JPanel {
  /** Label for displaying an image icon and a text */
  private JLabel jlblImageTitle = new JLabel();

  /** Text area for displaying text */
  private JTextArea jtaDescription = new JTextArea();

  public DescriptionPanel() {
    // Center the icon and text and place the text under the icon
    jlblImageTitle.setHorizontalAlignment(JLabel.CENTER);
    jlblImageTitle.setHorizontalTextPosition(JLabel.CENTER);
    jlblImageTitle.setVerticalTextPosition(JLabel.BOTTOM);

    // Set the font in the label and the text field
    jlblImageTitle.setFont(new Font("SansSerif", Font.BOLD, 16));
    jtaDescription.setFont(new Font("Serif", Font.PLAIN, 14));

    // Set lineWrap and wrapStyleWord true for the text area
    jtaDescription.setLineWrap(true);
    jtaDescription.setWrapStyleWord(true);
    jtaDescription.setEditable(false);

    // Create a scroll pane to hold the text area
    JScrollPane scrollPane = new JScrollPane(jtaDescription);

    // Set BorderLayout for the panel, add label and scrollpane
    setLayout(new BorderLayout(5, 5));
    add(scrollPane, BorderLayout.CENTER);
    add(jlblImageTitle, BorderLayout.WEST);
  }

  /** Set the title */
  public void setTitle(String title) {
    jlblImageTitle.setText(title);
  }

  /** Set the image icon */
  public void setImageIcon(ImageIcon icon) {
    jlblImageTitle.setIcon(icon);
  }

  /** Set the text description */
  public void setDescription(String text) {
    jtaDescription.setText(text);
  }
}
