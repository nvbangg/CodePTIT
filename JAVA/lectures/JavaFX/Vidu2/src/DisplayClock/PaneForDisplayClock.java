package DisplayClock;

import javafx.animation.*;
import javafx.event.*;
import javafx.scene.layout.*;
import javafx.util.Duration;

public class PaneForDisplayClock extends BorderPane {
    
    private ClockPane clockPane = new ClockPane();
    private NumberClockPane numberClock = new NumberClockPane();
    private ThingsForTop thingsForTop = new ThingsForTop();
    
    public PaneForDisplayClock() {
        this.setStyle("-fx-background-color: black");
        this.setBottom(numberClock);
        this.setTop(thingsForTop);
        this.setCenter(clockPane);
        
        // Xử lý sự kiện kim giờ, phút, giây chạy
        EventHandler<ActionEvent> eventHandler = e -> handlerClock();
        Timeline animation = new Timeline(new KeyFrame(Duration.millis(1000), eventHandler));
        animation.setCycleCount(Timeline.INDEFINITE);                           // Đặt chu kì là không xác định => Animation chạy mãi mãi
        animation.play();                                                       // Bắt đầu chạy Animation
        
        // Xử lý sự kiện chọn quốc gia trong ComboBox
        thingsForTop.getChoose().setOnAction(e -> handlerChoose());
    }

    private void handlerClock() {
        int idx = thingsForTop.getChoose().getItem().indexOf(thingsForTop.getChoose().getValue());
        String zoneID = thingsForTop.getChoose().getZoneID()[idx];
        clockPane.setClockPaneTime(zoneID);
        numberClock.setNumberClockTime(zoneID);
        thingsForTop.setImageViewFSunMoon(zoneID);
    }
    
    private void handlerChoose() {
        int idx = thingsForTop.getChoose().getItem().indexOf(thingsForTop.getChoose().getValue());
        thingsForTop.setCountryCity(thingsForTop.getChoose().getValue(), thingsForTop.getChoose().getCities()[idx]);
    }
}
