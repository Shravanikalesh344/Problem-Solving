import java.util.*;

class Assign35Prog3
{

    public static int LastOccurance(int Arr1[],int iValue)
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 0 ; iCnt < Arr1.length ; iCnt++)
        {
            if(Arr1[iCnt] == iValue)
            {
                iCount = iCnt;
            }
        }
        return iCount;
       
    }

    public static void main(String arg[])
    {
    Scanner sobj = new Scanner(System.in);

    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int iNo = 0;

    System.out.println("Enter the number of elements :");
    iSize = sobj.nextInt();

    int Arr[] = new int[iSize];

    System.out.println("Enter the elements :");
    for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
    {
        Arr[iCnt] = sobj.nextInt();
    }

    System.out.println("Enter the element to find First Occurance :");
    iNo = sobj.nextInt();

    iRet = LastOccurance(Arr,iNo);
    System.out.println("Last Occurance is at Position" + iRet);
   
    }   
}