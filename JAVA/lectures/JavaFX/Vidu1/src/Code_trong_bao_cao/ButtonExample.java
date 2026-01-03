package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

public class ButtonExample extends Application {

    @Override
    public void start(Stage stage) {
        Button button = new Button("Button example");
        StackPane root = new StackPane(button);
        
        Scene scene = new Scene(root, 300, 100);
        stage.setScene(scene);
        stage.setTitle("Button");
        stage.show();
        
    }
    
    public static void main(String[] args) {
        launch(args);
    }
    
}
