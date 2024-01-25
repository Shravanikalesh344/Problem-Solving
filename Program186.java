import java.util.*;

class Program186
{
    public static int CountCapital(String str)
    {
     int iCnt = 0;
     char Arr[] = str.toCharArray();
     int iCount = 0;


     for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
     {
        if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
        {
            iCount++;
        }
     }
     return iCount;
   }
    public static void main(String arg[])
    {
      Scanner sobj = new Scanner(System.in);

     String str = null;

     System.out.println("Enter Your Name :");
     str = sobj.nextLine();

    int iRet = 0;
    iRet = CountCapital(str);
    System.out.println("Capital Elements are :"+iRet);
    sobj.close();
    }

}