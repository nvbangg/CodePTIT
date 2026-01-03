package Code_trong_bao_cao;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.scene.text.Font;
import javafx.scene.text.Text;
import javafx.stage.Stage;

public class TextExample extends Application {
    
    @Override
    public void start(Stage stage) {
        Text text = new Text(50, 50, "Đỗ Hùng Anh");
        text.setUnderline(true);
        text.setStrikethrough(true);
        text.setFont(Font.font(50));
        Pane root = new Pane(text);
        Scene scene = new Scene(root, 500, 100);
        stage.setScene(scene);
        stage.setTitle("text");
        stage.show();
    }
    
    public static void main(String[] args) {
        launch(args);
    }
    
}
