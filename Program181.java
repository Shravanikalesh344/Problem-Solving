import java.util.*;

class Program181
{
    public static void main(String arg[])
    {
      Scanner sobj = new Scanner(System.in);

     String str = null;

     System.out.println("Enter Your Name :");
     str = sobj.nextLine();

     System.out.println("Your Name is :"+str);

     System.out.println("Length of Your Name is :"+str.length());


      
        sobj.close();
    }

}