import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.Socket;

import TCP.Laptop;

public class TCP_Object_Stream {
    public static void main(String[] args) throws Exception {
        Socket socket = new Socket("36.50.135.242", 2209);
        ObjectOutputStream oos = new ObjectOutputStream(socket.getOutputStream());
        oos.writeObject("B23DCCN067;jNEYbPud");
        ObjectInputStream ois = new ObjectInputStream(socket.getInputStream());
        
        Laptop laptop = (Laptop) ois.readObject();
        String[] names = laptop.name.trim().split("\\s+");
        String t = names[0];
        names[0] = names[names.length - 1];
        names[names.length - 1] = t;
        laptop.name = String.join(" ", names);
        laptop.quantity = Integer.parseInt(new StringBuilder(laptop.quantity+ "").reverse().toString());
        
        oos.writeObject(laptop);
        socket.close();

    }
}
