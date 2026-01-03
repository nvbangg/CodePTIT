package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.TextArea;
import javafx.stage.Stage;

public class TextAreaExample extends Application {
    
    @Override
    public void start(Stage stage) {
        TextArea root = new TextArea();
        Scene scene = new Scene(root, 300, 100);
        stage.setScene(scene);
        stage.setTitle("TextArea");
        stage.show();
    }
    
    public static void main(String[] args) {
        launch(args);
    }
    
}
