package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.scene.shape.Polygon;
import javafx.scene.shape.Polyline;
import javafx.stage.Stage;

public class PolygonAndPolylineExample extends Application {
    
    @Override
    public void start(Stage stage) {
        Polygon polygon = new Polygon(0, 0, 100, 200, 200, 100);
        Polyline polyline = new Polyline(300, 0, 400, 200, 500, 100);
        
        Pane root = new Pane(polygon, polyline);
        Scene scene = new Scene(root, 500, 300);
        stage.setScene(scene);
        stage.setTitle("Polygon và Polyline");
        stage.show();
    }
    
    public static void main(String[] args) {
        launch(args);
    }
    
}
