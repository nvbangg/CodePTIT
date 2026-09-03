package TCP;

import java.io.Serializable;

public class Laptop  implements Serializable {
    private static final long serialVersionUID = 20150711L;

    public int id;
    public String code;
    public String name;
    public int quantity;


    public Laptop() {
    }

    public Laptop(int id, String code, String name, int quantity) {
        this.id = id;
        this.code = code;
        this.name = name;
        this.quantity = quantity;
    }

}
