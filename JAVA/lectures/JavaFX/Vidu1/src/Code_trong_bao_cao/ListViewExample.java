package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.ListView;
import javafx.scene.control.SelectionMode;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

public class ListViewExample extends Application {
    
    @Override
    public void start(Stage stage) {
        ListView<String> lv = new ListView<>();
        lv.getItems().addAll("Muc 1", "Muc 2", "Muc 3");
        lv.getSelectionModel().setSelectionMode(SelectionMode.MULTIPLE);
        StackPane root = new StackPane(lv);
        Scene scene = new Scene(root, 300, 100);
        stage.setScene(scene);
        stage.setTitle("ListView");
        stage.show();
    }
    
    public static void main(String[] args) {
        launch(args);
    }
    
}
