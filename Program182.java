import java.util.*;

class Program182
{
    public static void main(String arg[])
    {
      Scanner sobj = new Scanner(System.in);

     String str = null;

     System.out.println("Enter Your Name :");
     str = sobj.nextLine();

     int iCnt = 0;

     for(iCnt = 0 ; iCnt < str.length() ; iCnt++)
     {
        System.out.println(str.charAt(iCnt));
     }


      
        sobj.close();
    }

}