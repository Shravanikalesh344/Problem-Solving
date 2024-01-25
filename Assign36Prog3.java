import java.util.*;

class Assign36Prog3
{
    public static boolean StrCmp(String Src , String Dest ,int iCnt)
    {
          int i = 0;
          if(iCnt > Dest.length())
          {
             System.out.println(Src + Dest);
          }
          for(i = 0 ; i < iCnt ; iCnt++)
          {
            if(Src.charAt(i) == Dest.charAt(i))
            {
                return true;
            }
          }
          return false;

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

        System.out.println("Enter Number  :");
        iNo = sobj.nextInt();

       boolean bRet = false;

        bRet= StrCmp(str1 , str2 , iNo);
        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else 
        {
            System.out.println("FALSE");
        }
       


    }
}