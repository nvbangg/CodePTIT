import UDP.Customer;
import java.io.*;
import java.net.*;

public class uUjJcey2 {
    public static void main(String[] args) throws Exception {
        DatagramSocket sk = new DatagramSocket();
        InetAddress ip = InetAddress.getByName("36.50.135.242");
        byte[] rq = ";B23DCCN863;uUjJcey2".getBytes();
        sk.send(new DatagramPacket(rq, rq.length, ip, 2209));

        byte[] bf1 = new byte[4096];
        sk.receive(new DatagramPacket(bf1, bf1.length));

        String inp = new String(bf1, 0, 8);
        ObjectInputStream oi = new ObjectInputStream(new ByteArrayInputStream(bf1, 8, bf1.length));
        Customer cm = (Customer) oi.readObject();

        String[] a = cm.getName().split(" ");
        StringBuilder usn = new StringBuilder();
        for (int i = 0; i < a.length; i++) {
            a[i] = a[i].substring(0, 1).toUpperCase() + a[i].substring(1).toLowerCase();
        }
        a[a.length - 1] = a[a.length - 1].toUpperCase();
        StringBuilder st = new StringBuilder(a[a.length - 1]);
        st.append(", ");
        for (int i = 0; i < a.length - 1; i++) {
            usn.append(a[i].substring(0, 1).toLowerCase());
            st.append(a[i] + " ");
        }
        usn.append(a[a.length - 1].toLowerCase());
        String[] dob = cm.getDayOfBirth().split("-");
        cm.setDayOfBirth(dob[1] + "/" + dob[0] + "/" + dob[2]);
        cm.setName(st.toString().trim());
        cm.SetUsername(usn.toString());
        System.out.println(cm.getId() + "\n" + cm.getCode() + "\n" + cm.getName() +
                "\n" + cm.getDayOfBirth() + "\n"
                + cm.getUsername());

        ByteArrayOutputStream bos = new ByteArrayOutputStream();
        bos.write(inp.getBytes());
        ObjectOutputStream os = new ObjectOutputStream(bos);

        os.writeObject(cm);
        os.flush();

        byte[] out = bos.toByteArray();
        sk.send(new DatagramPacket(out, out.length, ip, 2209));

        sk.close();
    }
}