import java.util.*;
import Marvellous.Arithmatic;

class Program171
{
   
    public static void main(String arg[])
    {

        Scanner sobj = new Scanner(System.in);
        

        int iNo1 = 0 , iNo2 = 0;
        int iAns = 0;
        System.out.println("Enter First NUmber");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second NUmber");
        iNo2 = sobj.nextInt();

        Arithmatic aobj = new Arithmatic(iNo1 , iNo2);

        iAns = aobj.Addtion();
        System.out.println("Addtion is :"+iAns);

    }
}

//javac -d . Arithmatic.java
//javac Program171.java
//java Program171