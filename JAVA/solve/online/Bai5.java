import java.io.*;
import java.util.*;

public class Bai5 {
    public static void main(String[] args) throws Exception {
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<String> list = (ArrayList<String>) ois.readObject();
        ois.close();
        
        Set<Integer> nums = new TreeSet<>();
        
        for (String s : list) {
            String[] words = s.split("\\s+");
            for (String word : words) {
                try {
                    int num = Integer.parseInt(word);
                    nums.add(num);
                } catch (NumberFormatException e) {
                }
            }
        }
        
        for (int num : nums) {
            System.out.println(num);
        }
    }
}
