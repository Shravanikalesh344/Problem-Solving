import java.util.*;

class Assign40Prog1
{
    public static int CountOne(int iNo)
    {
        int Count = 0;
        
        while(iNo != 0)
        {
           Count += iNo & 1;
           iNo >>= 1; 
        }
        return Count;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        int iRet = 0;

        iRet = CountOne(iValue);
        System.out.println("Output :"+iRet);
    }
}