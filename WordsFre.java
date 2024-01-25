import java.util.*;

class WordsFre
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
       System.out.println("Enter the word you want to search :");
       String str1 = sobj.nextLine();

       int iCnt = 0;
        int iCount  = 0;
       for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
       {
           if(str1.equals(Arr[iCnt]))
           {
                iCount++;
           }
        
       }
       System.out.println("Frequency is "+iCount);
    }
}