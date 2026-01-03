package Code_trong_bao_cao;

import javafx.scene.image.Image;
import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.image.ImageView;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class ImagaAndImageViewExample extends Application {

    @Override
    public void start(Stage stage) {
        Image imageURL = new Image("http://liveexample.pearsoncmg.com/book"
                + "/image/china.gif");
        Image imageFile = new Image("file:us.gif");
        ImageView imageViewURL = new ImageView(imageURL);
        ImageView imageViewFile = new ImageView(imageFile);
        VBox root = new VBox(imageViewURL, imageViewFile);
        root.setSpacing(10);
        Scene scene = new Scene(root, 380, 200);
        stage.setScene(scene);
        stage.setTitle("Imaga and ImageView");
        stage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }

}
