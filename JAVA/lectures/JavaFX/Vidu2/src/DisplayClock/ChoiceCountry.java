package DisplayClock;

import javafx.collections.*;
import javafx.scene.control.ComboBox;

public class ChoiceCountry extends ComboBox<String> {
    private String[] country = {"Việt Nam", "China", "France", "United Kingdom", "New Zealand" ,"United States of America"};
    
    private String[] cities = {"Hà Nội", "Beijing", "Paris", "London", "Wellington", "Washington, D.C."};  
    
    private String[] ZoneID = {"Asia/Ho_Chi_Minh", "Asia/Shanghai", "Europe/Paris", "Europe/London", "NZ","EST5EDT"};
        
    private ObservableList<String> items = FXCollections.observableArrayList(country); 
    
    public ChoiceCountry() {
        this.getItems().addAll(items);
        this.setPrefWidth(217);
        this.setValue("Việt Nam"); 
    }

    public String[] getCities() {
        return cities;
    }

    public ObservableList<String> getItem() {
        return items;
    }

    public String[] getZoneID() {
        return ZoneID;
    }
}
