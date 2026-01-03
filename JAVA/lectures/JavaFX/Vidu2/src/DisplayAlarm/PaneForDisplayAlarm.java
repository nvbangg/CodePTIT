package DisplayAlarm;

import TimeChoice.TimeChoice;
import javafx.animation.*;
import javafx.event.*;
import javafx.scene.layout.BorderPane;
import javafx.util.Duration;


public class PaneForDisplayAlarm extends BorderPane {
    private PaneforCenter center = new PaneforCenter();
    private TimeChoice top = new TimeChoice(true,true,false);
    
    public PaneForDisplayAlarm() {
        this.setStyle("-fx-background-color: black");
        this.setCenter(center);
        this.setTop(top);
        setAction();
    }
    
    public void setAction() {
        // Xử lý sự kiện thay đổi thời gian báo thức
        top.getCbHour().setOnAction(e -> handle());     
        top.getCbMinute().setOnAction(e -> handle());             
        
        // Xử lý sự kiện báo thức
        EventHandler<ActionEvent> eventHandler = e -> center.handleTime(top);
        Timeline animation = new Timeline(new KeyFrame(Duration.millis(1000), eventHandler));
        animation.setCycleCount(Timeline.INDEFINITE);                           // Đặt chu kì là không xác định => Animation chạy mãi mãi
        animation.play();                                                       // Bắt đầu chạy Animation
    }
    
    public void handle() {
        if(top.getCbHour().getValue().equals("Hour (none)") || top.getCbMinute().getValue().equals("Minute (none)")) {
            center.setHour("No");    
            center.setMinute("Alarms");
        }
        else {
            center.setHour(top.getCbHour().getValue() + ":");
            center.setMinute(top.getCbMinute().getValue());
        }
    }
}
