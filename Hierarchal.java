
class Base
{
    public int A,B;

    public Base()
    {
        System.out.println("Base Constructor");
    }
    public void fun()
    {
        System.out.println("Base Fun");
    }
}

class Derived extends Base
{
    public int X,Y;

    public Derived()
    {
        System.out.println("Derived Constructor");
    }

    public void gun()
    {
        System.out.println("Derived Gun");
    }
}

class DerivedX extends Base
{
    public int P,Q; 

    public DerivedX ()
    {
        System.out.println("Inside DerivedX");
    }

}

class Hierarchal
{
    public static void main(String A[])
    {
        Derived dobj1 = new Derived();
        DerivedX dobj2 = new DerivedX();


    

        
    }
}