import java.util.*;

class Assign39Prog1
{
    public static boolean CheckBit(int iNo , int iPos)
    {
        int iMask = 0X00000001;
        iMask = iMask << (iPos - 1);
        int iResult = 0;

        iResult = iMask & iNo;

        if(iResult == iMask)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
    public static void main(String srg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iPos = 0;

        System.out.println("Enter Number :");
        iValue = sobj.nextInt();

        System.out.println("Enter Position :");
        iPos = sobj.nextInt();

        boolean bRet = false;

        bRet = CheckBit(iValue , iPos);

        if(bRet == true)
        {
             System.out.println("Bit is ON");   
        }
        else 
        {
             System.out.println("Bit is OFF");
        }


    }
}