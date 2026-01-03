package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.scene.shape.Line;
import javafx.stage.Stage;

public class LineExample extends Application {
    
    @Override
    public void start(Stage stage) {
        Line line = new Line(50, 50, 290, 90);
        Pane root = new Pane(line);
        Scene scene = new Scene(root, 300, 100);
        stage.setScene(scene);
        stage.setTitle("Line");
        stage.show();
    }
    
    public static void main(String[] args) {
        launch(args);
    }
    
}
