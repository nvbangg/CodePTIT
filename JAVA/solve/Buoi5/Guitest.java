import java.awt.*;
import javax.swing.*;

public class Guitest {
    public static void main(String[] args) {
        MyFrame f = new MyFrame("The Front View of a Microwave Oven");
        f.setSize(400, 300);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}