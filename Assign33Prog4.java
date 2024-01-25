import java.util.*;

class Assign33Prog4
{
    public static void Display(int Arr1[])
    {
        int iCnt = 0;

        for(iCnt = 0 ; iCnt < Arr1.length ; iCnt++)
        {
            if((((Arr1[iCnt] % 3)== 0)&&(Arr1[iCnt] % 5)==0))
            {
               System.out.print(Arr1[iCnt]+"\t");
            }
        
        }
        System.out.println();
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int n = 0;
        int iCnt = 0;
        System.out.println("Enter the number of elements you want");
        n = sobj.nextInt();

        int Arr[] = new int[n];
        System.out.println("Enter Elements");
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        
        Display(Arr);
     }
}