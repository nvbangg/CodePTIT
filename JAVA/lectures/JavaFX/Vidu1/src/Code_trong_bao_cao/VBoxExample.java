package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;


public class VBoxExample extends Application {

    @Override
    public void start(Stage stage)  {
        VBox root = new VBox(10);
        root.getChildren().add(new Button("Button 1"));
        root.getChildren().add(new Button("Button 2"));
        root.getChildren().add(new Button("Button 3"));
        root.getChildren().add(new Button("Button 4"));
        root.setAlignment(Pos.CENTER);
        Scene scene = new Scene(root,400,200);
        stage.setScene(scene);
        stage.setTitle("VBox");
        stage.show();
        
    }
    
    public static void main(String[] args) {
        launch(args);
    }
    
    
}
