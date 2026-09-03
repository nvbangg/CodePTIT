package TCP;

import java.io.Serializable;

public class Laptop implements Serializable{
    private static final long serialVersionUID = 20150711L;
    public int id, quantity;
    public String code, name;
    public Laptop(int id, int quantity, String code, String name) {
        this.id = id;
        this.quantity = quantity;
        this.code = code;
        this.name = name;
    }
    
}
