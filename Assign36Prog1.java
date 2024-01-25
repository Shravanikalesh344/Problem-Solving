import java.util.*;

class Assign36Prog1
{
    public static String StrNCatX(String Src , String Dest ,int iCnt)
    {
            int iCount = 0;
            String Result = null;
           
            char Arr2[] = Dest.toCharArray();
            if(iCnt > Arr2.length)
            {
                return Src + Dest;
            }

            for(iCount = 0 ; iCount < iCnt ; iCount++)
            {
                 Src =  Src + Arr2[iCount];
            }
           
           return Src;


    }
    

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str1 = null;
        String str2 = null;
        int iNo = 0;

        System.out.println("Enter String 1 :");
        str1 = sobj.nextLine();


        System.out.println("Enter String 2 :");
        str2 = sobj.nextLine();

        System.out.println("Enter Number of Characters You Want To Concat :");
        iNo = sobj.nextInt();

        String Result = null;

        Result = StrNCatX(str1 , str2 , iNo);
        System.out.println("String is :"+Result);
       


    }
}