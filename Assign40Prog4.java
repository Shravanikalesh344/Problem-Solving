import java.util.*;

class Assign40Prog4
{
    public static boolean CheckBit(int iNo,int iValue1 ,int iValue2)
    {
         
  
          if(((iNo >> (iValue1-1))& 1)==1)
            {
                return true;
            }
          else if(((iNo >>(iValue2-1))& 1)==1)
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
        int iPos1 = 0;
        int iPos2 = 0;

        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        System.out.println("Enter the position1 :");
        iPos1 = sobj.nextInt();

        System.out.println("Enter Position 2 :");
        iPos2 = sobj.nextInt();

        boolean bRet = false;

        bRet = CheckBit(iValue,iPos1,iPos2);
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