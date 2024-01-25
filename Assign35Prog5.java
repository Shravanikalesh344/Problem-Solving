import java.util.*;

class Assign35Prog5
{

    public static int Product(int Arr1[])
    {
        int iCnt = 0;
        int iProd = 1;

        for(iCnt = 0 ; iCnt < Arr1.length ; iCnt++)
        {
            if((Arr1[iCnt] %2)!= 0)
            {
                iProd = iProd * Arr1[iCnt];
            }
        }
        if(iProd == 1)
        {
            iProd = 0;
        }
        return iProd;
       
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

    iRet = Product(Arr);
    System.out.println("Product of All odd elements are :" + iRet);
   
    }   
}