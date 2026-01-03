import java.io.*;
import java.util.*;
import java.util.regex.*;

public class Bai4 {
    public static void main(String[] args) throws FileNotFoundException {
        File file = new File("DATA.in");

        if (!file.exists()) {
            throw new FileNotFoundException();
        }

        Scanner scanner = new Scanner(file);
        long result = 0;

        while (scanner.hasNextLine()) {
            String line = scanner.nextLine();

            String[] tokens = line.trim().split("\\s+");

            for (String token : tokens) {
                try {
                    long num = Long.parseLong(token);
                    if (num > Integer.MAX_VALUE && num <= Long.MAX_VALUE) {
                        result += num;
                    }
                } catch (NumberFormatException error) {
                   
                }
            }
        }

        System.out.println(result);

        scanner.close();
    }
}
