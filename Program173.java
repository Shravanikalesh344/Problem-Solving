import java.util.*;

class Program173
{
    public static int Factorial(int iNo)
    {
        int iCnt =  0;
        int imul = 1;
       
        iCnt = 1;
        while(iCnt <= iNo)       
        {
            imul = imul * iCnt;
            iCnt++;
        }
        return imul;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;

        System.out.println("Enter the number to find Factorial");
        iValue1 = sobj.nextInt();

        int iAns = 0;
        iAns = Factorial(iValue1);
        System.out.println("Factorial is :"+iAns);
    }
}