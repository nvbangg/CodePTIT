package DisplayClock;

import Time.CurrentTime;
import javafx.geometry.Pos;
import javafx.scene.control.Label;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.text.*;

public class NumberClockPane extends VBox {   
    private Label labelnumberClock = new Label();
    private Label labeldmy = new Label();
    
    public NumberClockPane() { 
        labelnumberClock.setFont(Font.font("Verdana", FontWeight.BOLD,80));
        labelnumberClock.setTextFill(Color.YELLOW);         
        
        labeldmy.setTextFill(Color.WHITE);
        labeldmy.setFont(Font.font(30));         
        
        this.setAlignment(Pos.CENTER);        
        this.setNumberClockTime("Asia/Ho_Chi_Minh");
    }
    
    public void setNumberClockTime(String zoneID) {
        // Hiển thị giờ hiện tại
        CurrentTime time = new CurrentTime(zoneID);
        labelnumberClock.setText(time.getHour() + ": " + time.getMinute() + ": " + time.getSecond());

        // Hiển thị thứ ngày tháng năm
        labeldmy.setText(time.getThu() + ", " + time.getThang() + " " + time.getNgay() +", " + time.getNam());
        
        // Thêm vào VBox
        this.getChildren().clear();
        this.getChildren().addAll(labelnumberClock,labeldmy);
    }
}
