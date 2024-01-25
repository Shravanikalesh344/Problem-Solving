import java.util.*;



class Matrix
{
    protected int Arr[][];

    public Matrix(int A , int B)
    {
        Arr = new int[A][B];
    }

    protected void finalize()
    {
        Arr = null;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0 , j = 0;
        System.out.println("Enter the elements");
         for( i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
               Arr[i][j] = sobj.nextInt();
            }   
    }
    }

    public void Display()
    {
        int i = 0 , j = 0;
        System.out.println("Entered elements are :");
        for( i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }
  
}

class MyMatrix extends Matrix 
{
    public MyMatrix(int A , int B)
    {
        super(A,B);
    }
    public void  UpdateMatrix()
    {
        int i = 0 , j = 0 ;
        int iCnt = 0;
        for( i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if((Arr[i][j] % 2)!=0)
                {
                    Arr[i][j] = (Arr[i][j]) +1;
                }
        
            }
     
     }
    }
}

class Program404
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0 , iCol =0;
        int i = 0 , j =0;
        int iNo1 = 0;
        
        System.out.println("Enter the number of rows");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of columns");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow , iCol);

        mobj.Accept();
        mobj.Display(); 

       mobj.UpdateMatrix();

       System.out.println("Updated Matrix is :");

       mobj.Display();

 

        mobj = null;
        System.gc();

    }
}
