import java.util.*;

class Assign36Prog2
{
    public static boolean StrCmp(String Src , String Dest)
    {
       
        int i = 0;
    
        if(Src.charAt(i)== Dest.charAt(i))
        {
            return true;
        }
        else 
        {
            return false;
        }
        }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str1 = null;
        String str2 = null;
        boolean bRet = false;

        System.out.println("Enter String 1 :");
        str1 = sobj.nextLine();


        System.out.println("Enter String 2 :");
        str2 = sobj.nextLine();

    
        bRet = StrCmp(str1 ,str2);
        if(bRet == true)
        {
            System.out.println("Strings Are Same");
        }
        else 
        {
            System.out.println("Strings Are Not Same");
        }
       


    }
}