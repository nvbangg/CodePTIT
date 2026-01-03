package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.scene.shape.Ellipse;
import javafx.stage.Stage;

public class EllipseExample extends Application {
    
    @Override
    public void start(Stage stage) {
        Ellipse ellipse = new Ellipse(100, 100, 80, 50);
        Pane root = new Pane(ellipse);
        Scene scene = new Scene(root, 300, 200);
        stage.setScene(scene);
        stage.setTitle("Ellipse");
        stage.show();
    }
    
    public static void main(String[] args) {
        launch(args);
    }
    
}
