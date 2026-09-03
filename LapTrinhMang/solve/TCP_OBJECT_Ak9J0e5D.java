import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.Socket;

import TCP.Laptop;

public class TCP_OBJECT_Ak9J0e5D {
    public static void main(String[] args) throws Exception {
        Socket socket = new Socket("36.50.135.242", 2209);
        
        ObjectOutputStream oos = new ObjectOutputStream(socket.getOutputStream());
        ObjectInputStream ois = new ObjectInputStream(socket.getInputStream());
        
        oos.writeObject("B23DCCN067;Ak9J0e5D");
        oos.flush();

        Laptop laptop = (Laptop) ois.readObject();
        
        String[] words = laptop.name.trim().split(" ");
        if (words.length > 1){
            String temp = words[0];
            words[0] = words[words.length - 1];
            words[words.length - 1] = temp;
        }
        laptop.name = String.join(" ", words);

        laptop.quantity = Integer.parseInt(new StringBuilder(String.valueOf(laptop.quantity)).reverse().toString());

        oos.writeObject(laptop);
        oos.flush();

        socket.close();
    }
}
