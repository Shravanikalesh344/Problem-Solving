import java.util.*;

class WordsLargeLength1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        String Arr[] = str.split(" ");

     /*   for(String s : Arr)
        {
            System.out.println(s);
        }
        */

       int iCnt = 0;
       String MaxStr = "";
       int iMax = 0;

       for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
       {
           if(Arr[iCnt].length() >= iMax)
           {
              iMax = Arr[iCnt].length();
              MaxStr = Arr[iCnt];
           }
        
       }
       System.out.println("Largest word is : " +MaxStr+ " Having length "+iMax);
    }
}