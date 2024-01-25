import java.util.*;

class Assign33Prog1
{
    public static int Difference(int Arr1[])
    {
        int iCnt = 0;
        int iEven = 0;
        int iOdd = 0;
        int Difference = 0;

        for(iCnt = 0 ; iCnt < Arr1.length ; iCnt++)
        {
            if((Arr1[iCnt] % 2)== 0)
            {
                iEven = iEven + Arr1[iCnt];
            }
            else 
            {
                iOdd = iOdd + Arr1[iCnt];
            }
        }
        return (Difference = iEven - iOdd);
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int n = 0;
        int iCnt = 0;
        System.out.println("Enter the number of elements you want");
        n = sobj.nextInt();

        int Arr[] = new int[n];
        System.out.println("Enter Elements");
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        int iRet = 0;
        iRet = Difference(Arr);
        System.out.println("Difference is :"+iRet); 



    }
}