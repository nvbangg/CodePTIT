package Time;

import java.util.*;

public class CurrentTime extends GregorianCalendar {
    
    private String[] days = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    
    private String[] months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December",};
    
    public CurrentTime() {}
    
    public CurrentTime(String zoneID) {
        this.setTimeZone(TimeZone.getTimeZone(zoneID));
    }
    
    public int getNam() {
        return this.get(GregorianCalendar.YEAR);
    }

    public String getThang() {
        return months[this.get(GregorianCalendar.MONTH)];                           
    }

    public int getNgay() {
        return this.get(GregorianCalendar.DAY_OF_MONTH);
    }

    public String getThu() {
        return days[this.get(GregorianCalendar.DAY_OF_WEEK) - 1];
    }

    public String getHour() {
        String s = Integer.toString(this.get(GregorianCalendar.HOUR_OF_DAY)); 
        if(s.length() == 1) return "0" + s;
        return s;
    }

    public String getMinute() {
        String s = Integer.toString(this.get(GregorianCalendar.MINUTE)); 
        if(s.length() == 1) return "0" + s;
        return s;        
    }

    public String getSecond() {
        String s = Integer.toString(this.get(GregorianCalendar.SECOND)); 
        if(s.length() == 1) return "0" + s;
        return s;        
    }    
}
