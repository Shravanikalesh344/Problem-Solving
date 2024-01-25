package Marvellous;

public class Arithmatic
{
    public int iValue1;
    public int iValue2;

    public Arithmatic(int a , int b)
    {
        this.iValue1 = a;
        this.iValue2 = b;
    }
    public int Addtion()
    {
        int iSum  = 0;
        iSum = this.iValue1 + this.iValue2;
        return iSum;
    }
}
