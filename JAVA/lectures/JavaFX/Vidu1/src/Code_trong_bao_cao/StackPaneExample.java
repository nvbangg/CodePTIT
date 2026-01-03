package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

public class StackPaneExample extends Application {

    @Override
    public void start(Stage stage) {
        StackPane root = new StackPane(new Button("Button 1 on bottom"),
                new Button("Button 2 on top"));
        Scene scene = new Scene(root, 300, 100);
        stage.setScene(scene);
        stage.setTitle("StackPane");
        stage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }

}
