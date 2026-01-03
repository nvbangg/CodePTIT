package DisplayClock;

import Time.CurrentTime;
import javafx.scene.layout.Pane;
import javafx.scene.paint.Color;
import javafx.scene.shape.*;
import javafx.scene.text.*;

public class ClockPane extends Pane {
    private int hour;
    private int minute;
    private int second;

    // Phương thức constructor khởi tạo thời gian hiện tại
    public ClockPane() {
        this.setClockPaneTime("Asia/Ho_Chi_Minh");
    }
    
    // Lấy thời gian hiện tại
    public void setClockPaneTime(String zoneID) {
        CurrentTime time = new CurrentTime(zoneID);
        this.hour = Integer.parseInt(time.getHour())%12;                        //hour%12: Đổi từ 24h -> 12h
        this.minute = Integer.parseInt(time.getMinute());
        this.second = Integer.parseInt(time.getSecond());
        this.paintClock();
    }
    
    // Vẽ đồng hồ
    private void paintClock() {
        // Vẽ vòng tròn
        double clockRadius = Math.min(this.getWidth(), this.getHeight())*0.4;
        double centerX = this.getWidth()/2;
        double centerY = this.getHeight()/2;
        
        Circle circle = new Circle(centerX, centerY, clockRadius);
        circle.setFill(Color.WHITE);
        circle.setStroke(Color.BLACK);
        Text text12 = new Text(centerX-20, centerY - clockRadius*0.9 + 15, "12");   
        text12.setFont(Font.font(40));
        Text text3 = new Text(centerX - 8 + clockRadius*0.9, centerY+15, "3");
        text3.setFont(Font.font(40));
        Text text6 = new Text(centerX - 15, centerY + clockRadius*0.9 + 15, "6");
        text6.setFont(Font.font(40));
        Text text9 = new Text(centerX - clockRadius*0.9 - 10, centerY+15, "9");
        text9.setFont(Font.font(40));
        
        // Vẽ kim giây
        double secondLength = clockRadius*0.8;
        double secondEndX = centerX + secondLength*Math.sin(this.second*Math.PI/30);
        double secondEndY = centerY - secondLength*Math.cos(this.second*Math.PI/30);
        Line secondLine = new Line(centerX, centerY, secondEndX, secondEndY);
        secondLine.setStroke(Color.RED);
        secondLine.setStrokeWidth(2);
        
        // Vẽ kim phút
        double minuteReal = this.minute + this.second/60;
        double minuteLength = clockRadius*0.65;
        double minuteEndX = centerX + minuteLength*Math.sin(minuteReal*Math.PI/30);
        double minuteEndY = centerY - minuteLength*Math.cos(minuteReal*Math.PI/30);
        Line minuteLine = new Line(centerX, centerY, minuteEndX, minuteEndY);
        minuteLine.setStroke(Color.BLUE);        
        minuteLine.setStrokeWidth(3);
        
        // Vẽ kim giờ
        double hourReal = this.hour + minuteReal/60;                         
        double hourLength = clockRadius*0.5;
        double hourEndX = centerX + hourLength*Math.sin(hourReal*Math.PI/6);
        double hourEndY = centerY - hourLength*Math.cos(hourReal*Math.PI/6);
        Line hourLine = new Line(centerX, centerY, hourEndX, hourEndY);
        hourLine.setStroke(Color.GREEN);        
        hourLine.setStrokeWidth(4);
        
        // Thêm các node vào pane
        this.getChildren().clear();
        this.getChildren().addAll(circle,text12,text3,text6,text9,secondLine,minuteLine,hourLine);
    }
    
    // Mỗi lần thay đổi size cửa sổ nó sẽ lấy chiều trộng và cao để vẽ lại đồng hồ
    @Override
    public void setWidth(double width) {
        super.setWidth(width);
        paintClock();
    }
    
    @Override
    public void setHeight(double width) {
        super.setHeight(width);
        paintClock();
    }    
}
