package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.CheckBox;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class CheckBoxExample extends Application {

    @Override
    public void start(Stage stage) {
        VBox root = new VBox();
        CheckBox cb1 = new CheckBox("CheckBox 1");
        CheckBox cb2 = new CheckBox("CheckBox 2");
        CheckBox cb3 = new CheckBox("CheckBox 3");
        root.getChildren().addAll(cb1, cb2, cb3);
        Scene scene = new Scene(root, 300, 100);
        stage.setScene(scene);
        stage.setTitle("CheckBox");
        stage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }

}
