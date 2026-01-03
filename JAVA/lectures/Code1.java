package testJDBC;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;


public class ConnectMysqlExample {
	private static String DB_URL = "jdbc:mysql://localhost:3306/test";
    private static String USER_NAME = "root";
    private static String PASSWORD = "Mysql.123456789";
    public static void main(String args[]) {
    	
        try {         
            Connection connect = getConnection(DB_URL, USER_NAME, PASSWORD);
            // crate statement
            Statement statement = connect.createStatement();
              
            statement.executeUpdate("INSERT INTO student(id, ten, dia_chi) " + "VALUES (12, 'Hoang',  'Bac Ninh')");
             
            ResultSet rs = statement.executeQuery("SELECT ID, ten, dia_chi FROM student WHERE dia_chi" +  " = 'PHU THO' ");
            
            while (rs.next()) {
                System.out.println(rs.getInt(1) + " \t " + rs.getString(2) 
                        + " \t " + rs.getString(3));
            }
            // close connection
            connect.close();
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }

    public static Connection getConnection(String dbURL, String userName, 
            String password) {
        Connection connect = null;
        try {
            Class.forName("com.mysql.jdbc.Driver");
            connect = DriverManager.getConnection(dbURL, userName, password);
            System.out.println("connect successfully!");
        } 
        catch (Exception ex) {
            System.out.println("connect failure!");
            ex.printStackTrace();
        }
        return connect;
    }
}
