import java.util.*;

class Assign32Prog5
{

    public static void Reverse(String str)
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0;
        for(iCnt = Arr.length-1; iCnt >= 0 ; iCnt--)
        {
           System.out.print(Arr[iCnt]);
        }
        System.out.println();
       
    }


    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter the String :");
        str = sobj.nextLine();

        Reverse(str);

      
        sobj.close();
    }
}