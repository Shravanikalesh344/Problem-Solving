import java.sql.*;

class Database1
{
    public static void main(String arg[])
    {
        String URL = "jdbc:sql://localhost:3306/PPA";
        String username = "root";
        String Password = "root";
        String Query = "select * from student";

        Connection cobj = DriverManager.getConnection(URL,username,Password);
        Statement sobj = cobj.createStatement();
        ResultSet robj = sobj.executeQuery(Query);

        while(robj.next())
        {
            System.out.println("RID"+robj.getInt("rno"));
            System.out.println("Name "+robj.getString("name"));
            System.out.println("City "+robj.getString("city"));
            System.out.println("Marks"+robj.getInt("marks"));

        }
    }
}