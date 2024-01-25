import java.util.*;

class Assign32Prog2
{

    public static int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt]>= 'a')&&(Arr[iCnt]<= 'z'))
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

        System.out.println("Enter the String :");
        str = sobj.nextLine();

        int iRet = 0;

        iRet = CountSmall(str);
        System.out.println("Small Letters Are :"+iRet);

        sobj.close();
    }
}