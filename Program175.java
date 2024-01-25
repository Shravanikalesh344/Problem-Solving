import java.util.*;

class Program175
{
    public static void  EvenOddFactor(int iNo)
    {
        int iCnt =  0;
        int iSumEven = 0;
        int iSumOdd = 0;
       
        iCnt = 1;
        for(iCnt = 1 ; iCnt <= iNo; iCnt++)       
        {
            if((iNo % iCnt)== 0)
            {
                if((iCnt % 2)== 0)
                {
                    iSumEven = iSumEven + iCnt;
                }
                else 
                {
                    iSumOdd = iSumOdd + iCnt;
                }
            }
        }
        System.out.println("Addition of Even Factors is :"+iSumEven);
         System.out.println("Addition of Even Factors is :"+iSumOdd);
        
        
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