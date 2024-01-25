import java.util.*;

class Assign36Prog4
{
    public static void StrRevTogX(String Str)
    {
           char Arr[] = Str.toCharArray();
           String Result = null;
           int iCnt = 0;
          
           
           for(iCnt = Arr.length-1 ; iCnt >= 0 ; iCnt--)
           {
               
                if((Arr[iCnt]>= 'A')&&(Arr[iCnt]<= 'Z'))
                {
                  Arr[iCnt] = (char) (Arr[iCnt]+32);
                   System.out.print(Arr[iCnt]);
                }
                else
                {
                   Arr[iCnt] = (char) (Arr[iCnt]-32);
                   System.out.print(Arr[iCnt]);
                }
              
           }
       


    }
    

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str1 = null;

        System.out.println("Enter String  :");
        str1 = sobj.nextLine();

        String Result = null;

         StrRevTogX(str1);
        //System.out.println("String is :"+Result);
       


    }
}