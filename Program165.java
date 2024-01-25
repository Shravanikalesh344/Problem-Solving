import java.util.*;

class Program165
{
    public static void main(String arg[])
    {

        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0 , iNo2 = 0;
        int iAns = 0;
        System.out.println("Enter First NUmber");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second NUmber");
        iNo2 = sobj.nextInt();

        iAns = iNo1 + iNo2;
        System.out.println("Addtion is :"+iAns);

    }
}