package ClockMain;

import DisplayAlarm.PaneForDisplayAlarm;
import DisplayClock.PaneForDisplayClock;
import javafx.geometry.*;
import javafx.scene.control.Button;
import javafx.scene.layout.*;

public class PaneForTopCenter extends HBox {

    private Button buttonClock = new Button("Clock");
    private Button buttonAlarm = new Button("Alarm");
    private PaneForDisplayClock paneForDisplayClock = new PaneForDisplayClock();
    private PaneForDisplayAlarm paneForDisplayAlarm = new PaneForDisplayAlarm();
    
    public PaneForTopCenter(BorderPane pane) {
        buttonClock.setPrefSize(150, 10);   
        buttonAlarm.setPrefSize(150, 10);
        
        buttonClock.setStyle("-fx-font-size: 30");
        buttonAlarm.setStyle("-fx-font-size: 30");
        
        pane.setCenter(paneForDisplayClock);
        setAction(pane);
        
        this.setPadding(new Insets(30, 10, 10, 10));
        this.setAlignment(Pos.CENTER);
        this.setSpacing(100);
        this.getChildren().addAll(buttonClock,buttonAlarm);
    }
    
    private void setAction(BorderPane pane) {
        buttonClock.setOnAction(e -> pane.setCenter(paneForDisplayClock));
        buttonAlarm.setOnAction(e -> pane.setCenter(paneForDisplayAlarm));
    }
}
