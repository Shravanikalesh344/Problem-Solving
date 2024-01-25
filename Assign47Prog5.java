import java.util.*;
import Lb.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public boolean CheckSparx()
    {
        int i = 0 , j = 0;
        
        int iCntz = 0 , iCnt = 0;
        
      

        for(i = 0 ; i < Arr.length ; i++)
        {
           
            for(j = 0; j < Arr[i].length ; j++)
            {
                if(Arr[i][j] == 0)
                {
                    iCntz++;
                }
                else
                {
                    iCnt++;
                }
            }
            System.out.println();
        }
        if(iCntz > iCnt)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Assign47Prog5
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

        chk = mobj.CheckSparx();

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