import java.util.*;

class Assign40Prog5
{

     public static int ToggleRange(int iNo ,int iStart , int iEnd)
     {
        int iMask = 0;
        int Result = 0;
        

        iMask = ((1 <<(iEnd - iStart+1))-1)<<iStart;
           
        return Result = iNo ^ iMask;

        
     }



    public static void main(String arg[])
    {
        
        Scanner sobj = new Scanner(System.in);

        int iValue1= 0;
        int Srange = 0;
        int Erange2 = 0;

        System.out.println("Enter the number :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the Start Bit :");
        Srange = sobj.nextInt();

        System.out.println("Enter The End Bit :");
        Erange2 = sobj.nextInt();

        int iRet = 0;

        iRet = ToggleRange(iValue1,Srange,Erange2);
        System.out.println("Updated Number is :"+iRet);
    }
}