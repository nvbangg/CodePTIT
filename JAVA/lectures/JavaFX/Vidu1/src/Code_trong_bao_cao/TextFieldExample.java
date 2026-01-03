package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.TextField;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

public class TextFieldExample extends Application {
    
    @Override
    public void start(Stage stage) {
        TextField tf = new TextField();
        StackPane root = new StackPane(tf);
        Scene scene = new Scene(root, 300, 100);
        stage.setScene(scene);
        stage.setTitle("TextField");
        stage.show();
    }
    
    public static void main(String[] args) {
        launch(args);
    }
    
}
