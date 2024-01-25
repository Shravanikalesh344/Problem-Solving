
abstract class Demo
{
    public int A;
    public int B;

    public Demo()
    {
        System.out.println("Inside Constructor of Demo \n");
        this.A = 0;
        this.B = 0;
    }
    
    abstract void fun(); //virtual void fun() = 0 in c++

    void gun()
    {
        System.out.println("Inside gun of Demo \n");
    }
    
}

class Hello extends Demo
{
    public Hello()
    {
        System.out.println("Inside constructor of Hello");
    }

    public void fun()
    {
        System.out.println("Inisde Fun of Hello \n");
    }
}


class AbstractDemo
{
    public static void main(String Args[])
    {
     // error   Demo obj = new Demo();

     Hello hobj = new Hello();
     hobj.fun();
     hobj.gun();

     
    }
}