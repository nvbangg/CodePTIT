package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.stage.Stage;

public class LablelExample extends Application {
    
    @Override
    public void start(Stage stage) {
        Label root = new Label("Label example");
        root.setUnderline(true);
        root.setAlignment(Pos.CENTER);
        Scene scene = new Scene(root, 250, 100);
        stage.setScene(scene);
        stage.setTitle("Label");
        stage.show();
    }
    
    public static void main(String[] args) {
        launch(args);
    }
    
}
