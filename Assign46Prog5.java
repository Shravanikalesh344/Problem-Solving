import java.util.*;
import Lb.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void SwapRows()
    {
       int i = 0 , j = 0;
   
    System.out.println("Swapped Array is :"); 
    
    for ( i = 0; i < Arr.length ; i += 2) {
            for ( j = 0; j < Arr[i].length; j++) {
                // Swap elements in consecutive rows
                int temp = Arr[i][j];
                Arr[i][j] = Arr[i + 1][j];
                Arr[i + 1][j] = temp;
            }
        }
        Display();
    
  
 
}
}

  


class Assign46Prog5
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

        mobj.SwapRows();

        // Function calls

        mobj = null;
        System.gc();
    }
}