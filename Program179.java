import java.util.*;

class Program179
{
    public static int Addition(int Brr[])
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 0 ; iCnt < Brr.length ; iCnt++)
        {
            iSum = iSum + Brr[iCnt];
        }
        return iSum;
        
    }
    public static void main(String arg[])
    {
      Scanner sobj = new Scanner(System.in);

      int iSize = 0;
      int iCnt = 0;
      System.out.print("Enter the number of elements :");
      iSize = sobj.nextInt();

      int Arr[] = new int[iSize];

      System.out.println("Enter the Elements :");
      for(iCnt= 0 ; iCnt < iSize ; iCnt++)
      {
         Arr[iCnt] = sobj.nextInt();
      }
    int iRet = 0;
     iRet = Addition(Arr);
     System.out.println("Addition of Elements is :"+iRet);


      
        sobj.close();
    }

}