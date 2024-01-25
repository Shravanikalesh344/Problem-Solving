
class Arithematic
{
    public int Addition(int a , int b)
    {
        return a + b;
    }
    public int Addition(int A , int B , int C)
    {
        return A + B + C;
    }
    public double Addition(double A , double B)
    {
        return A + B;
    }
    public void Addition(int A , double B)
    {
        System.out.println("Inside First Addition");
    }
    public void Addition(double A , int B)
    {
        System.out.println("Inside Second Addition");
    }
}

class Overloading
{
    public static void main(String Arg[])
    {
        Arithematic aobj = new Arithematic();

        int iRet = 0;
        double dRet = 0;

        iRet = aobj.Addition(11,21);
        System.out.println("ADDtion is "+iRet);
        iRet = aobj.Addition(11,21,51);
        System.out.println("ADDtion is "+iRet);
        dRet = aobj.Addition(8.9,6.7);
          System.out.println("ADDtion is "+dRet);

          aobj.Addition(11,8.99);
          aobj.Addition(8.99,11);

    }
}