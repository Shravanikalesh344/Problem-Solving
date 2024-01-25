import java.util.*;

class Program196
{
    public static boolean CheckBit(int iNo)
    {
         int iMask = 0X00000004;
         int iResult = 0;
         iResult = iNo & iMask;

        if(iResult == iMask)
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
        int iNo = 0;
        boolean bRet = false;
       
        
        System.out.println("Enter Number :");
        iNo = sobj.nextInt();

       bRet = CheckBit(iNo);

       if(bRet == true)
       {
        System.out.println("3Rd Bit is ON");
       }
       else 
       {
        System.out.println("3Rd Bit is OFF");
       }


       
       }
}
       