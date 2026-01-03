package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.FlowPane;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class FlowPaneExample extends Application {
    
    @Override
    public void start(Stage stage) {
        FlowPane root = new FlowPane();
        root.getChildren().add(new Button("Button 1"));
        root.getChildren().add(new Button("Button 2"));
        root.getChildren().add(new Button("Button 3"));
        root.getChildren().add(new Button("Button 4"));
        
        Scene scene = new Scene(root, 400, 200);
        stage.setScene(scene);
        stage.setTitle("FlowPane");
        stage.show();
        
    }
    
    public static void main(String[] args) {
        launch(args);
    }
    
}
