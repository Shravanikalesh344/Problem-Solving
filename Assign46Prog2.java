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

     public int CountFrequency(int iValue)
     {
        int iCnt = 0;
        int i = 0 , j = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j= 0 ; j < Arr[i].length ; j++)
            {
                if(Arr[i][j] == iValue)
                {
                    iCnt++;
                }
            }
        }
        return iCnt;
     }
    }

class Assign46Prog2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0 , iCol =0;
        int i = 0 , j =0;
        int iNo = 0;
        
        
        System.out.println("Enter the number of rows");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of columns");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow , iCol);

        mobj.Accept();
        mobj.Display(); 

        System.out.println("Enter a number to find frequency");
        iNo = sobj.nextInt();
        int iRet = 0;
        iRet = mobj.CountFrequency(iNo);
        System.out.println("Frequency is  :"+iRet);
        

 

        mobj = null;
        System.gc();

    }
}
