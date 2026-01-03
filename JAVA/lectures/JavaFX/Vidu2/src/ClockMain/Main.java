package ClockMain;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.BorderPane;
import javafx.stage.Stage;

public class Main extends Application {
    
    @Override
    public void start(Stage primaryStage) {
        BorderPane pane = new BorderPane();
        pane.setStyle("-fx-background-color: black");
        pane.setTop(new PaneForTopCenter(pane));
        
        Scene scene = new Scene(pane,1100, 900);
        primaryStage.setTitle("Clock Application");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}