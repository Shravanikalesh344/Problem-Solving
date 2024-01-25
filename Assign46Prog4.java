import java.util.*;
import Lb.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void Addcol()
    {
       int i = 0 , j = 0;
        int iSum  = 0;
        int icnt = 0;

    while(icnt < Arr.length)
    {  
    for(i = 0 ; i < Arr.length ; i++)
    {
        iSum = iSum + Arr[i][j];
    }
    System.out.println(iSum);
    iSum = 0;
    icnt++;
    j++;
    }

       
}
}  


class Assign46Prog4
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

        mobj.Addcol();

        // Function calls

        mobj = null;
        System.gc();
    }
}