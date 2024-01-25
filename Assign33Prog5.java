import java.util.*;

class Assign33Prog5
{
    public static void Display(int Arr1[])
    {
        int iCnt = 0;

        for(iCnt = 0 ; iCnt < Arr1.length ; iCnt++)
        {
            if((Arr1[iCnt] % 11)==0)
            {
                System.out.println(Arr1[iCnt]);
            }
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0;
        int iCnt = 0;
        System.out.println("Enter the no of  Elements ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the Elements :");
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt]= sobj.nextInt();
        }

        Display(Arr);
    }
   // sobj.close();
}