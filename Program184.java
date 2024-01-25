import java.util.*;

class Program184
{
    public static void main(String arg[])
    {
      Scanner sobj = new Scanner(System.in);

     String str = null;

     System.out.println("Enter Your Name :");
     str = sobj.nextLine();

     char Arr[] = str.toCharArray();
     int iCnt = 0;

      for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
      {
        System.out.println(Arr[iCnt]);
      }
        sobj.close();
    }

}