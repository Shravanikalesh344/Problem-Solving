import java.util.*;

class Assign32Prog4
{

    public static boolean ChkVowel(String str)
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0;
        
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt]== 'a')||(Arr[iCnt]== 'e')&&(Arr[iCnt]== 'i')&&(Arr[iCnt]== 'o')&&(Arr[iCnt]== 'u'))
            {
                return true;
            }
           
        }
        return false;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter the string :");
        str = sobj.nextLine();

        boolean  iRet = false;
        iRet = ChkVowel(str);
        if(iRet == true)
        {
            System.out.println("String Contain Vowels");
        }
        else 
        {
            System.out.println("String Doesnt Contains Vowels");
        }
        sobj.close();
    }
}