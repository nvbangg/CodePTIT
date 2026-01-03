package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.BorderPane;
import javafx.stage.Stage;

public class Cau_truc_co_ban_cua_chuong_trinh_JavaFX extends Application {

    @Override
    public void start(Stage stage) {
        BorderPane root = new BorderPane();
        Scene scene = new Scene(root, 300, 250);
        stage.setScene(scene);
        stage.setTitle("Example");
        stage.show();
    }
    
    public static void main(String[] args) {
        launch(args);
    }
}
