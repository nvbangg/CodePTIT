package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.scene.shape.Circle;
import javafx.stage.Stage;

public class CircleExample extends Application {
    
    @Override
    public void start(Stage stage) {
        Circle circle = new Circle(100, 100, 50);
        Pane root = new Pane(circle);
        Scene scene = new Scene(root, 300, 200);
        stage.setScene(scene);
        stage.setTitle("Circle");
        stage.show();
    }
    
    public static void main(String[] args) {
        launch(args);
    }
    
}
