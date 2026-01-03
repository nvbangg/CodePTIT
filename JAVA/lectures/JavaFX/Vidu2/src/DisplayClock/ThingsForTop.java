package DisplayClock;

import Time.CurrentTime;
import javafx.geometry.*;
import javafx.scene.control.Label;
import javafx.scene.image.*;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;

public class ThingsForTop extends VBox {
    
    private ChoiceCountry choose = new ChoiceCountry();
    
    private ImageView imageViewFlag = new ImageView();  
    
    private String country = "Việt Nam",city = "Hà Nội";
    
    private Label labelCity = new Label();
    
    private Label labelCountry = new Label();
    
    private ImageView imageViewFSunMoon = new ImageView(); 
    
    public ThingsForTop() {       
        // Đặt mặc định tên quốc qia, lá cờ, thành phố
        setImageViewFlagLabelCityLabelCountry();
        
        // Hiển thị lá cờ
        imageViewFlag.setFitWidth(200);
        imageViewFlag.setFitHeight(120); 
        
        // Hiển thị tên thành phố
        labelCity.setTextFill(Color.YELLOW);
        labelCity.setFont(Font.font(50));           
        
        // Hiển thị tên quốc gia
        labelCountry.setTextFill(Color.WHITE);
        labelCountry.setFont(Font.font(25));      
        
        // Hiển thị ngày và đêm
        this.setImageViewFSunMoon("Asia/Ho_Chi_Minh");
        imageViewFSunMoon.setFitWidth(100);
        imageViewFSunMoon.setFitHeight(100);         
        
        // Thêm vào VBox
        this.setAlignment(Pos.CENTER);
        this.setSpacing(10);
        this.getChildren().addAll(choose, paneForFlagCountryCitySunMoon());
    }
    
    private VBox paneForCountryCity() {
        VBox vBox = new VBox(10,labelCity, labelCountry);
        vBox.setAlignment(Pos.CENTER);
        return vBox;
    }
    
    private HBox paneForFlagCountryCitySunMoon() {
        HBox hBox = new HBox(10, imageViewFlag, paneForCountryCity(), imageViewFSunMoon);
        hBox.setAlignment(Pos.CENTER);
        return hBox;
    }
    
    private void setImageViewFlagLabelCityLabelCountry() {
        imageViewFlag.setImage(new Image(this.getClass().getResourceAsStream("image/" +country+".gif")));
        labelCity.setText(city);
        labelCountry.setText(country);
    }
    
    public void setCountryCity(String country , String city) {
        this.country = country;
        this.city = city;
        setImageViewFlagLabelCityLabelCountry();
    }

    public ChoiceCountry getChoose() {
        return choose;
    }

    public void setImageViewFSunMoon(String zoneID) {
        CurrentTime time = new CurrentTime(zoneID);
        int hour = Integer.parseInt(time.getHour());
        if((hour >= 19 && hour <= 23) || (hour >= 0 && hour <= 5))
            imageViewFSunMoon.setImage(new Image(this.getClass().getResourceAsStream("image/moon.gif")));
        else imageViewFSunMoon.setImage(new Image(this.getClass().getResourceAsStream("image/sun.gif")));
    }
}
