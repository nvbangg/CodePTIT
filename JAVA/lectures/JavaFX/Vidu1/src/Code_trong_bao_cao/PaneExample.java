package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.stage.Stage;
import javafx.scene.layout.Pane;


public class PaneExample extends Application {

    @Override
    public void start(Stage stage) {
        Pane root = new Pane();
        Button button1 = new Button("Button 1");
        button1.relocate(100, 50);
        Button button2 = new Button("Button 2");
        button2.relocate(100, 90);
        root.getChildren().addAll(button1, button2);
  
        Scene scene = new Scene(root, 300, 200);
        stage.setScene(scene);
        stage.setTitle("Pane");
        stage.show();
    }
    
    public static void main(String[] args) {
        launch(args);
    }
}