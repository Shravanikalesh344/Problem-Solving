import java.util.*;

class Digit
{
    public int Number = 0;

    Digit(int iNo)
    {
        this.Number = iNo;
    }

    public int CountEven()
    {
        int iDigit = 0;
        int iCnt = 0;
        while(Number != 0)
        {
            iDigit = Number % 10;
            if((iDigit % 2) == 0)
            {
                iCnt++;
            }
            Number = Number / 10;
            
        }
        return iCnt;
    }

}

class Assign34Prog1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter A Number :");
        iValue = sobj.nextInt();

        Digit dobj = new Digit(iValue);

        int iRet = 0;

        iRet = dobj.CountEven();
        System.out.println("Number of Even Digits are :"+iRet);
    }
}