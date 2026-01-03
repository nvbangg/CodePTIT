package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.HBox;
import javafx.stage.Stage;

public class HBoxExample extends Application {

    @Override
    public void start(Stage stage) {
        HBox root = new HBox();
        root.getChildren().add(new Button("button 1"));
        root.getChildren().add(new Button("button 2"));
        root.getChildren().add(new Button("button 3"));
        root.getChildren().add(new Button("button 4"));

        Scene scene = new Scene(root, 400, 200);
        stage.setScene(scene);
        stage.setTitle("HBox");
        stage.show();

    }

    public static void main(String[] args) {
        launch(args);
    }

}
