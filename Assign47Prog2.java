import java.util.*;
import Lb.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void ReverseRow()
    {
        int i = 0 , j = 0;

         System.out.println("Reversed Elements from the row are :");
        for(i = 0 ; i < Arr.length ; i++)
        {
           
            for(j = Arr[i].length -1; j >= 0 ; j--)
            {
                
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}

class Assign47Prog1
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

        mobj.ReverseRow();

        // Function calls

        mobj = null;
        System.gc();
    }
}