import java.util.*;

class Assign32Prog3
{

    public static int CountDiff(String str)
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0;
        int iCountSmall = 0;
        int iCountCapital = 0;
        int iDiff = 0;

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt]>= 'a')&&(Arr[iCnt]<= 'z'))
            {
                iCountSmall++;
            }
            else 
            {
                iCountCapital++;
            }
        }
        return iDiff = iCountSmall - iCountCapital;
    }


    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter the String :");
        str = sobj.nextLine();

        int iRet = 0;

        iRet = CountDiff(str);
        System.out.println("Difference is  :"+iRet);

        sobj.close();
    }
}