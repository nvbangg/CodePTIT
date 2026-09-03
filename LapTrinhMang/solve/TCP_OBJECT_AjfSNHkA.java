import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.Socket;

import TCP.Customer;

public class TCP_OBJECT_AjfSNHkA {
    public static void main(String[] args) throws Exception {
        Socket socket = new Socket("36.50.135.242", 2209);

        ObjectOutputStream oos = new ObjectOutputStream(socket.getOutputStream());
        ObjectInputStream ois = new ObjectInputStream(socket.getInputStream());

        oos.writeObject("B23DCCN067;AjfSNHkA");
        oos.flush();

        Customer customer = (Customer) ois.readObject();
        String[] words = customer.name.trim().toLowerCase().split(" ");
        String lastName = words[words.length - 1].toUpperCase();
        String firstName = "";
        for (int i = 0; i<words.length-1; i++){
            firstName += Character.toUpperCase(words[i].charAt(0))+ words[i].substring(1) + " ";
        }
        customer.name = lastName + ", "+ firstName.trim();

        String[] dob = customer.dayOfBirth.trim().split("-");
        customer.dayOfBirth = dob[1] + "/" + dob[0] + "/" + dob[2];

        String user = "";
        for (int i = 0; i< words.length-1; i++){
            user+= words[i].charAt(0);
           
        }
        user += words[words.length -1];
        customer.userName = user.toLowerCase();
        
        oos.writeObject(customer);
        oos.flush();
        socket.close();
    }
}
