import java.util.*;
import Lb.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public int MaxDiagonal()
    {
       int i = 0 , j = 0;
        int iSum  = 0;
        
        int iMax = Arr[i][j];
        

     for(i =  0 ; i < Arr.length ; i++)
     {
        for(j = 0 ; j < Arr[i].length ; j++)
        {
            if(i == j)
            {
                if(Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }
            }
        }
     }

    int iMax1 = Arr[0][0];
    for(i = 0 ; i < Arr.length ; i++)
    {
        for(j = 0 ; j <Arr[i].length ; j++)
        {
            if((i < j && j == Arr[i].length)||(i < j+1)||(i > j+1)||(i > j && i == Arr.length))
            {
                
                if(Arr[i][j] > iMax1)
                {
                    iMax1 = Arr[i][j];
                }
            }
        }
    }
    

    if(iMax > iMax1)
    {
        return iMax;
    }
    else
    {
        return iMax1;
    }
}
}  


class Assign46Prog3
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
        

        iRet = mobj.MaxDiagonal();
        System.out.println("Maximum from both diagonal is :"+iRet);

        // Function calls

        mobj = null;
        System.gc();
    }
}