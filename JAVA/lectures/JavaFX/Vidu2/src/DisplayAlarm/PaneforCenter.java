package DisplayAlarm;

import TimeChoice.TimeChoice;
import Time.CurrentTime;
import javafx.geometry.Pos;
import javafx.scene.control.Label;
import javafx.scene.layout.HBox;
import javafx.scene.media.*;
import javafx.scene.paint.Color;
import javafx.scene.text.*;
import javafx.util.Duration;

public class PaneforCenter extends HBox {
        
    private Label labelHour = new Label("No ");
    
    private Label labelMinute = new Label("Alarms");  
    
    MediaPlayer mediaPlayer = new MediaPlayer(new Media(this.getClass().getResource("AlarmSound/Audio.mp3").toString()));
    
    public PaneforCenter() {
        labelHour.setFont(Font.font("Verdana", FontWeight.BOLD,100));
        labelHour.setTextFill(Color.YELLOW); 
        
        labelMinute.setFont(Font.font("Verdana", FontWeight.BOLD,100));
        labelMinute.setTextFill(Color.YELLOW);   
        
        this.getChildren().add(new MediaView(mediaPlayer));
        this.setSpacing(10);
        this.setAlignment(Pos.CENTER);
        this.getChildren().addAll(labelHour,labelMinute);
    }

    public void setHour(String h) {
        labelHour.setText(h);
    }
    
    public void setMinute(String m) {
        labelMinute.setText(m);
    }
    
    public void handleTime(TimeChoice top) {
        CurrentTime time = new CurrentTime();
        if(time.getHour().equals(labelHour.getText().replaceAll(":", "")) && time.getMinute().equals(labelMinute.getText())) {    
            mediaPlayer.seek(Duration.ZERO); 
            mediaPlayer.play();
            top.getCbHour().setValue("Hour (none)");
            top.getCbMinute().setValue("Minute (none)");
        }
    }
}
