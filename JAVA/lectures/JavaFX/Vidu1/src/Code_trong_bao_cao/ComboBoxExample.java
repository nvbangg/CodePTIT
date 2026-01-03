package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.ComboBox;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

public class ComboBoxExample extends Application {

    @Override
    public void start(Stage stage) {
        ComboBox<String> cb = new ComboBox<>();
        cb.getItems().addAll("Muc 1", "Muc 2", "Muc 3");
        StackPane root = new StackPane(cb);
        Scene scene = new Scene(root, 300, 100);
        stage.setScene(scene);
        stage.setTitle("ComboBox");
        stage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }

}
