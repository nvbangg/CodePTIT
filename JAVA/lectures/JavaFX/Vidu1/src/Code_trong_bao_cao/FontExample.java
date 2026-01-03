package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.layout.VBox;
import javafx.scene.text.Font;
import javafx.scene.text.FontPosture;
import javafx.scene.text.FontWeight;
import javafx.stage.Stage;

public class FontExample extends Application {
    
    @Override
    public void start(Stage stage) {
        Label label = new Label("Font Example");
        label.setFont(Font.font("Time New Roman", FontWeight.BOLD,
                FontPosture.ITALIC, 20));
        VBox root = new VBox(label);
        Scene scene = new Scene(root, 250, 150);
        stage.setScene(scene);
        stage.setTitle("Font");
        stage.show();
    }
    
    public static void main(String[] args) {
        launch(args);
    }
}
