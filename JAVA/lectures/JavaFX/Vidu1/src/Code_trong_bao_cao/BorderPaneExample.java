package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.BorderPane;
import javafx.stage.Stage;

public class BorderPaneExample extends Application {
    
    @Override
    public void start(Stage stage) {
        BorderPane root = new BorderPane(new Button("Center"));
        Button top = new Button("Top");
        root.setTop(top);
        BorderPane.setAlignment(top, Pos.CENTER);
        Button left = new Button("Left");
        root.setLeft(left);
        BorderPane.setAlignment(left, Pos.CENTER);
        Button right = new Button("right");
        root.setRight(right);
        BorderPane.setAlignment(right, Pos.CENTER);
        Button bottom = new Button("Bottom");
        root.setBottom(bottom);
        BorderPane.setAlignment(right, Pos.CENTER);
        Scene scene = new Scene(root, 400, 200);
        stage.setScene(scene);
        stage.setTitle("BorderPane");
        stage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
    
}
