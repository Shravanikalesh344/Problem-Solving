import java.util.*;

class Assign35Prog4
{

    public static void Display(int Arr1[],int iStart , int iEnd)
    {
        int iCnt = 0;


        for(iCnt  = 0 ; iCnt < Arr1.length ; iCnt++)
        {
         if((Arr1[iCnt] >=  iStart)&&(Arr1[iCnt] <= iEnd))
          {

               System.out.print(Arr1[iCnt]+"\t");
           }
        }
    }
       
       
    
    public static void main(String arg[])
    {
    Scanner sobj = new Scanner(System.in);

    int iSize = 0;
    int iCnt = 0;
    int iNo1 = 0;
    int iNo2 = 0;

    System.out.println("Enter the number of elements :");
    iSize = sobj.nextInt();

    int Arr[] = new int[iSize];


    System.out.println("Enter the elements in array :");
    for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
    {
        Arr[iCnt] = sobj.nextInt();
    }

    System.out.println("Enter Start:");
    iNo1 = sobj.nextInt();

     System.out.println("Enter End:");
    iNo2 = sobj.nextInt();


    
    Display(Arr,iNo1,iNo2);

    }   
}