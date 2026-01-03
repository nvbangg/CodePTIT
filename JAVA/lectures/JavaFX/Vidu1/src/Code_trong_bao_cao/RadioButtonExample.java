package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.RadioButton;
import javafx.scene.control.ToggleGroup;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class RadioButtonExample extends Application {

    @Override
    public void start(Stage stage) {
        VBox root = new VBox();
        ToggleGroup group = new ToggleGroup();
        RadioButton rb1 = new RadioButton("RadioButton 1");
        rb1.setToggleGroup(group);
        RadioButton rb2 = new RadioButton("RadioButton 2");
        rb2.setToggleGroup(group);
        RadioButton rb3 = new RadioButton("RadioButton 3");
        rb3.setToggleGroup(group);
        root.getChildren().addAll(rb1, rb2, rb3);
        Scene scene = new Scene(root, 300, 100);
        stage.setScene(scene);
        stage.setTitle("RadioButton");
        stage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }

}
