import java.util.*;



class Assign32Prog1
{

    public static int CountCapital(String str)
        {
            int iCnt = 0;
            int iCount = 0;
            char Arr[] = str.toCharArray();

            for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
            {
                if((Arr[iCnt]>='A')&&(Arr[iCnt]<='Z'))
                {
                    iCount++;
                }
            }
            return iCount;
        }


    public static void main(String arg[])
    {

        Scanner sobj = new Scanner(System.in);
        
        String str = null;
       

        System.out.println("Enter String :");
        str = sobj.nextLine();
       
        int iRet = 0;

        iRet = CountCapital(str);
        System.out.println("Capital Letters Are :"+iRet);

        
    }
}