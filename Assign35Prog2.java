import java.util.*;

class Assign35Prog2
{

    public static int FirstOccurance(int Arr1[],int iValue)
    {
        int iCnt = 0;

        for(iCnt = 0 ; iCnt < Arr1.length ; iCnt++)
        {
            if(Arr1[iCnt] == iValue)
            {
                return iCnt;
            }
        }
        return iCnt;
       
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

    iRet = FirstOccurance(Arr,iNo);
    System.out.println("First Occurance is at Position" + iRet);
   
    }   
}