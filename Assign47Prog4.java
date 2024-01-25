import java.util.*;
import Lb.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public boolean CheckIdentity()
    {
        int i = 0 , j = 0;
        boolean check = false;
        int icnt = 0;
        boolean check1 =false;
      


     for(i = 0 ; i < Arr.length ; i++)
        {
           
            for(j = 0; j < Arr[i].length ; j++)
            {
                if(((i == j)&&(Arr[i][j]!=1))||(i != j)&&(Arr[i][j]!=0))
                {
                    return false;
                    
                }
            }
    }
    return true;

    }
}
class Assign47Prog4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;
        boolean chk = false;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        chk = mobj.CheckIdentity();

        if(chk == true)
        {
            System.out.println("TRUE");
        }
        else 
        {
            System.out.println("FALSE");
        }

        // Function calls

        mobj = null;
        System.gc();
    }
}