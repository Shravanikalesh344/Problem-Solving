import java.util.*;

class LetterCntHasMap
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+","");

        str = str.toLowerCase();
        char Arr[] = str.toCharArray();
       
        HashMap <Character , Integer> hobj = new HashMap<>();

        int Frequency = 0;
        int iCnt = 0;
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if(hobj.containsKey(Arr[iCnt]))
            {
                Frequency = hobj.get(Arr[iCnt]);
                hobj.put(Arr[iCnt], Frequency+1);
            }
            else
            {
                hobj.put(Arr[iCnt],1);   
            }
        }
        System.out.println(hobj);
       
        

    


    }
}