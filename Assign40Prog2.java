import java.util.*;

class Assign40Prog2
{
    public static void CommonBits(int iNo1 ,int iNo2)
    {
        int Count = 0;
        while(iNo1 != 0)
        {
            Count += iNo1 & 1;
            iNo1 >>= 1;
        }
        System.out.println(Count);

        int Count2 = 0;
        while(iNo2 != 0)
        {
            Count2 += iNo2 & 1;
            iNo2 >>= 1;
        }
        System.out.println(Count2);
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;
        
      

        System.out.println("Enter the number1 :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number1 :");
        iValue2 = sobj.nextInt();


        CommonBits(iValue1,iValue2);
     
    }
}