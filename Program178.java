import java.util.*;

class Program178
{
    public static void Display(int Brr[])
    {
        int iCnt = 0;
        for(iCnt = 0 ; iCnt < Brr.length ; iCnt++)
        {
            System.out.print(Brr[iCnt]+"\t");
        }
        System.out.println();
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

      Display(Arr);


      
        sobj.close();
    }

}