package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.GridPane;
import javafx.stage.Stage;

public class GridPaneExample extends Application {

    @Override
    public void start(Stage stage) {
        GridPane root = new GridPane();
        root.setGridLinesVisible(true);
        root.setHgap(25);
        root.setVgap(15);
        root.add(new Button("Button 1"), 0, 0);
        root.add(new Button("Button 2"), 1, 1);
        Scene scene = new Scene(root, 300, 100);
        stage.setScene(scene);
        stage.setTitle("GridPane");
        stage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
