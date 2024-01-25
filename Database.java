import java.sql.*;

class Database
{
    public static void main(String arg[])throws Exception
    {
       
        
        String URL = "jdbc:mysql://localhost:3306/PPA";
        String Username = "root";
        String Password =  "root";
        String Query = "select * from student";
       
        
      //  Class.forName("com.mysql.jdbc.Driver");

        Connection cobj = DriverManager.getConnection(URL , Username , Password);
        Statement sobj = cobj.createStatement();
        ResultSet robj = sobj.executeQuery(Query);
    //    ResultSet robj2 = sobj.executeQuery(Query1);

        while(robj.next())
        {
            System.out.println("RID :" +robj.getInt("rno"));
            System.out.println("Name :" +robj.getString("name"));
            System.out.println("City :" +robj.getString("city"));
            System.out.println("Marks :" +robj.getInt("marks"));

        }
        
    }
}

