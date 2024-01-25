import java.util.*;

class Program174
{
    public static void  EvenOddFactor(int iNo)
    {
        int iCnt =  0;
        int imul = 1;
       
        iCnt = 1;
        for(iCnt = 1 ; iCnt <= iNo; iCnt++)       
        {
            if((iNo % iCnt)== 0)
            {
                if((iCnt % 2)== 0)
                {
                    System.out.println("Even Factor :"+iCnt);
                }
                else 
                {
                    System.out.println("Odd Factor :"+iCnt);
                }
            }
        }
        
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;

        System.out.println("Enter Number");
        iValue1 = sobj.nextInt();

        EvenOddFactor(iValue1);
    }
}