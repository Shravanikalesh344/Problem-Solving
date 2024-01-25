import java.util.*;
import Lb.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void ReverseCol()
    {
        int i = 0 , j = 0;
        int icnt = 0;
        System.out.println("Transpose Matrix is :");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[j][i]+"\t");
            }
            System.out.println();
        }
    }
}

class Assign47Prog3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        mobj.ReverseCol();

        // Function calls

        mobj = null;
        System.gc();
    }
}