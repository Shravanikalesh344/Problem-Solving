import java.util.*;

class Assign38Prog3
{
    public static int ToggleBit(int iNo)
    {
        int iMask = 0X00000040;
        int iResult = 0;

        iResult = iNo ^ iMask;

        return iResult;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        int iRet = 0;

        iRet = ToggleBit(iValue);
        System.out.println("Updated Number is :"+iRet); 
    }
}