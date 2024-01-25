import java.util.*;

class Assign35Prog1
{

    public static boolean Check(int Arr1[],int iValue)
    {
        int iCnt = 0;

        for(iCnt = 0 ; iCnt < Arr1.length ; iCnt++)
        {
            if(Arr1[iCnt]==iValue)
            {
                return true;
            }
        }
        return false;
    }

    public static void main(String arg[])
    {
    Scanner sobj = new Scanner(System.in);

    int iSize = 0;
    int iCnt = 0;
    boolean bRet = false;
    int iNo = 0;

    System.out.println("Enter the number of elements :");
    iSize = sobj.nextInt();

    int Arr[] = new int[iSize];

    System.out.println("Enter the elements :");
    for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
    {
        Arr[iCnt] = sobj.nextInt();
    }

    System.out.println("Enter the element to search :");
    iNo = sobj.nextInt();

    bRet = Check(Arr,iNo);
    if(bRet == true)
    {
         System.out.println("Number is presnet");
    }
    else
    {
         System.out.println("Number is not Present");
    }
    }   
}