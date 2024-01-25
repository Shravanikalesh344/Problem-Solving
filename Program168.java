import java.util.*;

class Program168
{
    public static int Addtion(int iValue1 , int iValue2)
    {
        int iSum  = 0;
        iSum = iValue1 + iValue2;
        return iSum;
    }
    public static void main(String arg[])
    {

        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0 , iNo2 = 0;
        int iAns = 0;
        System.out.println("Enter First NUmber");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second NUmber");
        iNo2 = sobj.nextInt();

        iAns = Addtion(iNo1 , iNo2);
        System.out.println("Addtion is :"+iAns);

    }
}