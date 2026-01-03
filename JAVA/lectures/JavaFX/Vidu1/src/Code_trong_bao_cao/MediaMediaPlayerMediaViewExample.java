package Code_trong_bao_cao;

import java.io.File;
import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.scene.media.MediaPlayer;
import javafx.scene.media.MediaView;
import javafx.stage.Stage;
import javafx.scene.media.Media;

public class MediaMediaPlayerMediaViewExample extends Application {

    @Override
    public void start(Stage stage) {
        Media media = new Media(new File("videoExample.mp4").toURI().
                toString());
        MediaPlayer mediaPlayer = new MediaPlayer(media);
        MediaView mediaView = new MediaView(mediaPlayer);
        mediaPlayer.play();
        Pane root = new Pane(mediaView);
        Scene scene = new Scene(root, 650, 380);
        stage.setScene(scene);
        stage.setTitle("Media-MediaPlayer-MediaView");
        stage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }

}
