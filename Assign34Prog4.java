import java.util.*;

class Digit
{
    public int Number = 0;

    Digit(int iNo)
    {
        this.Number = iNo;
    }

    public int Multiply()
    {
        int iDigit = 0;
        int iMUl = 1;

        while(Number != 0)
        {
            iDigit = Number % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
            iMUl = iMUl * iDigit;
            Number = Number / 10;
            
        }
        return iMUl;
    }

}

class Assign34Prog4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter A Number :");
        iValue = sobj.nextInt();

        Digit dobj = new Digit(iValue);

        int iRet = 0;

        iRet = dobj.Multiply();
        System.out.println("Multiplication is  :"+iRet);
    }
}