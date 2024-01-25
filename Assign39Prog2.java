import java.util.*;

class Assign39Prog2
{
    public static int  CheckBit(int iNo , int iPos)
    {
        int iMask = 0X00000001;
        iMask = iMask << (iPos - 1);
        int iResult = 0;
    
       iResult = iMask & iNo;

       if(iResult == iMask)
       {
            return (iNo ^ iMask);
       }
       else 
       {
            return iNo;
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

        int iRet = 0;

        iRet = CheckBit(iValue , iPos);
        System.out.println("Output :"+iRet);


    }
}