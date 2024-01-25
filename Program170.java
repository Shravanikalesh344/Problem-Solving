import java.util.*;

class Arithmatic
{
    public int iValue1;
    public int iValue2;

    public Arithmatic(int a , int b)
    {
        this.iValue1 = a;
        this.iValue2 = b;
    }
    public int Addtion()
    {
        int iSum  = 0;
        iSum = this.iValue1 + this.iValue2;
        return iSum;
    }
}

class Program170
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

        Arithmatic aobj = new Arithmatic(iNo1 , iNo2);

        iAns = aobj.Addtion();
        System.out.println("Addtion is :"+iAns);

    }
}