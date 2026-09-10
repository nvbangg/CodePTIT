package UDP;

import java.io.Serializable;

public class Student implements Serializable {
    private static final long serialVersionUID = 20171107;

    public String id;
    public String code;
    public String name;
    public String email;
    public Student(String id, String code, String name, String email) {
        this.id = id;
        this.code = code;
        this.name = name;
        this.email = email;
    }
    public Student(String code) {
        this.code = code;
    }

    
}
