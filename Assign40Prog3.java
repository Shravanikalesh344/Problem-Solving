import java.util.*;

class Assign40Prog3
{
    public static boolean CheckBit(int iNo)
    {
        int Count = 0;
        int iMask = 0X00000100;
        int Result = 0;

        Result = iMask & iNo;
        if(Result == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        boolean bRet = false;

        bRet = CheckBit(iValue);
        if(bRet == true)
        {
         System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
    }
}