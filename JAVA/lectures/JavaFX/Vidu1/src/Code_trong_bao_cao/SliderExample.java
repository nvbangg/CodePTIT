package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Slider;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

public class SliderExample extends Application {
    
    @Override
    public void start(Stage stage) {
        Slider sb = new Slider(0, 100, 50);
        sb.setShowTickLabels(true);
        sb.setShowTickMarks(true);
        StackPane root = new StackPane(sb);
        Scene scene = new Scene(root, 300, 100);
        stage.setScene(scene);
        stage.setTitle("Slider");
        stage.show();
    }
    
    public static void main(String[] args) {
        launch(args);
    }
    
}
