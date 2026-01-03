package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.ScrollBar;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

public class ScrollBarExample extends Application {
    
    @Override
    public void start(Stage stage) {
        ScrollBar sb = new ScrollBar();
        StackPane root = new StackPane(sb);
        Scene scene = new Scene(root, 300, 100);
        stage.setScene(scene);
        stage.setTitle("ScrollBar");
        stage.show();
    }
    
    public static void main(String[] args) {
        launch(args);
    }
    
}
