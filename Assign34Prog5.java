import java.util.*;

class Digit
{
    public int Number = 0;

    Digit(int iNo)
    {
        this.Number = iNo;
    }

    public int Count()
 {
        int iDigit = 0;
        int iEven = 0;
        int iOdd = 0;
        int iDifference = 0;
        while(Number != 0)
        {
            iDigit = Number % 10;
            if((iDigit % 2) != 0)
            {
                iEven = iEven + iDigit;
            }
            else 
            {
                iOdd = iOdd + iDigit;
            }
            Number = Number / 10;
            
        }
        return (iDifference = iOdd - iEven);
    }

}

class Assign34Prog5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter A Number :");
        iValue = sobj.nextInt();

        Digit dobj = new Digit(iValue);

        int iRet = 0;

        iRet = dobj.Count();
        System.out.println("Difference is :"+iRet);
    }
}