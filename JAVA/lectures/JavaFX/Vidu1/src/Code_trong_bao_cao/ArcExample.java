package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Arc;
import javafx.scene.shape.ArcType;
import javafx.stage.Stage;

public class ArcExample extends Application {
    
    @Override
    public void start(Stage stage) {
        Arc arc1 = new Arc(150, 100, 80, 80, 30, 50);
        arc1.setType(ArcType.ROUND);
        Arc arc2 = new Arc(150, 100, 80, 80, 30 + 90, 50);
        arc2.setType(ArcType.OPEN);
        arc2.setStroke(Color.BLACK);
        arc2.setFill(Color.WHITE);
        Arc arc3 = new Arc(150, 100, 80, 80, 30 + 180, 50);
        Pane root = new Pane(arc1, arc2, arc3);
        Scene scene = new Scene(root, 300, 200);
        stage.setScene(scene);
        stage.setTitle("Arc");
        stage.show();
        
    }
    
    public static void main(String[] args) {
        launch(args);
    }
    
}
