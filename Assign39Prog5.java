import java.util.*;

class Assign39Prog5
{
    public static int ToggleNibble(int iNo)
    {
        int iMask = 0XF000000F;
        int iResult = 0;

        iResult = iMask ^ iNo;
        
        return iResult;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number :");
        iValue = sobj.nextInt();

        int iRet = 0;

        iRet = ToggleNibble(iValue);
        System.out.println("Output :"+iRet);
    }
}