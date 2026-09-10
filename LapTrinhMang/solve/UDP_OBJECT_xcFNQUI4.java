import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;
import UDP.Customer;

public class UDP_OBJECT_xcFNQUI4 {
    public static void main(String[] args) throws Exception {
        DatagramSocket socket = new DatagramSocket();
        InetAddress ip = InetAddress.getByName("36.50.135.242");
        int port = 2209;

        byte[] req = ";B23DCCN067;xcFNQUI4".getBytes();
        socket.send(new DatagramPacket(req, req.length, ip, port));

        byte[] buff = new byte[2048];
        DatagramPacket dp = new DatagramPacket(buff, buff.length);
        socket.receive(dp);

        byte[] reqId = new byte[8];
        System.arraycopy(dp.getData(), 0, reqId, 0, 8);

        ObjectInputStream ois = new ObjectInputStream(new ByteArrayInputStream(dp.getData(), 8, dp.getLength() - 8));
        Customer customer = (Customer) ois.readObject();

        String[] words = customer.name.trim().toLowerCase().split("\\s+");

        String lastName = words[words.length - 1].toUpperCase();
        String firstName = "";
        for (int i=0; i<words.length - 1; i++){
            firstName += Character.toUpperCase(words[i].charAt(0)) + words[i].substring(1) + " ";
        }
        customer.name = lastName + ", " + firstName.trim();

        String[] dob = customer.dayOfBirth.trim().split("-");
        customer.dayOfBirth = dob[1] + "/" + dob[0] + "/" + dob[2];

        String user = "";
        for (int i =0; i <words.length-1; i++){
            user += words[i].charAt(0);
        }
        user += words[words.length-1];
        customer.userName = user.toLowerCase();

        ByteArrayOutputStream baos = new ByteArrayOutputStream();
        ObjectOutputStream oos = new ObjectOutputStream(baos);
        oos.writeObject(customer);
        oos.flush();

        byte[] objBytes = baos.toByteArray();
        byte[] out = new byte[8 + objBytes.length];
        System.arraycopy(reqId, 0, out, 0, 8);
        System.arraycopy(objBytes, 0, out, 8, objBytes.length);
        socket.send(new DatagramPacket(out, out.length, ip, port));

        socket.close();
    }
}