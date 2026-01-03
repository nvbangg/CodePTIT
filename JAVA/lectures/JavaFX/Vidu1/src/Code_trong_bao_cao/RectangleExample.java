package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.scene.shape.Rectangle;
import javafx.stage.Stage;

public class RectangleExample extends Application {
    
    @Override
    public void start(Stage stage) {
        Rectangle rectangle = new Rectangle(10, 10, 100, 70);
        rectangle.setArcHeight(20);
        rectangle.setArcWidth(20);
        Pane root = new Pane(rectangle);
        Scene scene = new Scene(root, 300, 100);
        stage.setScene(scene);
        stage.setTitle("Rectangle");
        stage.show();
        
    }
    
    public static void main(String[] args) {
        launch(args);
    }
    
}
