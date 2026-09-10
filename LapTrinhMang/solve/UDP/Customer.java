package UDP;

import java.io.Serializable;

public class Customer implements Serializable {
    private static final long serialVersionUID = 20151107L;

    public String id;
    public String code;
    public String name;
    public String dayOfBirth;
    public String userName;
    public Customer() {
    }
    public Customer(String id, String code, String name, String dayOfBirth, String userName) {
        this.id = id;
        this.code = code;
        this.name = name;
        this.dayOfBirth = dayOfBirth;
        this.userName = userName;
    }
}