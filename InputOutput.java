import java.util.*;


class InputOutput
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Number :");
        int no1 = sobj.nextInt();

        System.out.println("Enter Second Number :");
        int no2 = sobj.nextInt();

        int Ans = 0;
        Ans = no1 + no2 ;

        System.out.println("Addition is :"+Ans);
    }
}