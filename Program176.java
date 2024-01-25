// input 5 
/*
 1 * 2 * 3 * 4* 5* 
*/

import java.util.*;

class Program176
{
    public static void Display(int iNo)
    {
        int iCnt =  0;
       
        iCnt = 1;
        for(iCnt = 1 ; iCnt <= iNo; iCnt++)       
        {
            System.out.print(iCnt+"\t"+"*\t");
        }
        System.out.println();
        
        
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;

        System.out.println("Enter Number");
        iValue1 = sobj.nextInt();

        Display(iValue1);
    }
}