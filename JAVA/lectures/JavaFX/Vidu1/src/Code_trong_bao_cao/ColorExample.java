package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.stage.Stage;

public class ColorExample extends Application {
    
    @Override
    public void start(Stage stage) {
        Circle circle = new Circle(50, Color.GREEN);
        Label label = new Label("Đây là hình tròn");
        label.setTextFill(Color.RED);
        VBox root = new VBox(circle, label);
        Scene scene = new Scene(root, 250, 150);
        stage.setScene(scene);
        stage.setTitle("Color");
        stage.show();
        
    }
    
    public static void main(String[] args) {
        launch(args);
    }
    
}
