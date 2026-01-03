package TimeChoice;

import javafx.geometry.*;
import javafx.scene.control.ComboBox;
import javafx.scene.layout.HBox;

public class TimeChoice extends HBox {
    
    private ComboBox<String> cbHour = new ComboBox();
    
    private ComboBox<String> cbMinute = new ComboBox<>();
    
    private ComboBox<String> cbSecond = new ComboBox<>();
    
    public TimeChoice(boolean cbhour, boolean cbminute, boolean cbsecond) {

        String[] hours = {"Hour (none)", "00", "01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11",
                          "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23"};
        String[] minutes = {"Minute (none)", "00", "01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11",
                            "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23",
                            "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", 
                            "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47",
                            "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59"};   
        String[] seconds = {"Second (none)", "00", "01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11",
                            "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23",
                            "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", 
                            "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47",
                            "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59"};
        cbHour.getItems().addAll(hours); 
        cbMinute.getItems().addAll(minutes);
        cbSecond.getItems().addAll(seconds);
        
        cbHour.setValue("Hour (none)");
        cbMinute.setValue("Minute (none)");
        cbSecond.setValue("Second (none)");
        
        cbHour.setStyle("-fx-font: 30px \"Serif\";");
        cbMinute.setStyle("-fx-font: 30px \"Serif\";");
        cbSecond.setStyle("-fx-font: 30px \"Serif\";");
        
        this.setPadding(new Insets(10, 10, 10, 10));
        this.setAlignment(Pos.CENTER);
        this.setSpacing(10);
        if(cbhour == true) this.getChildren().add(cbHour);
        if(cbminute == true) this.getChildren().add(cbMinute);
        if(cbsecond == true) this.getChildren().add(cbSecond);
    }

    public ComboBox<String> getCbHour() {
        return cbHour;
    }

    public ComboBox<String> getCbMinute() {
        return cbMinute;
    }

    public ComboBox<String> getCbSecond() {
        return cbSecond;
    }
}
