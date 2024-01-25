import java.util.*;

class Assign36Prog5
{

    public static void   StrPallindrome(String str1)
    {
        String str2 = str1;
        char arr[] = str2.toCharArray();
        String str3 = "";
        int iCnt = 0;
         for(iCnt = arr.length -1 ; iCnt >= 0; iCnt--)
         {
               str3 = str3 + arr[iCnt];
        
         }
         int i = 0;
        
        

         if(str1.charAt(i) == str3.charAt(i))
         {
        
                  System.out.println("TRUE");
         }
         else 
         {
             System.out.println("FALSE");
         }
               
    }

   public static void main(String arg[])
    {
        String str = null;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String :");
        str = sobj.nextLine();

 //       boolean bRet = false;

        StrPallindrome(str);

     /*   if(bRet== true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }*/


    }
}