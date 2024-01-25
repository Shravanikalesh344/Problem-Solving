
class Base
{
    public void Fun() // 1000
    {
        System.out.println("Inside Base Fun");
    }
    public void Gun() //2000
    {
        System.out.println("Inside Base Gun");
    }
    public void Sun() //3000
    {
        System.out.println("Inside Base Sun");
    }
    public void Run() //4000
    {
        System.out.println("Inside Base Run");
    }

}

class Derived extends Base
{
    public void Fun()//5000
    {
        System.out.println("Inside Derived Fun");
    }
    public void Sun()//6000
    {
        System.out.println("Inside Derived Sun");
    }
    public void Run(int A)//7000
    {
        System.out.println("Inside Derived Run with one parameter");
    }
    public void Mun()//8000
    {
        System.out.println("Inside Derived Mun");   
    }
}

class Overriding
{
    public static void main(String Arg[])
    {
        Base bobj = new Derived();
        // Base bobj = new Base();
        // Derived dobj = new Derived();
        // Derived dobj = new Base();



        bobj.Fun(); // Derived Fun
        bobj.Gun();
        bobj.Sun();
        bobj.Run();
        //bobj.Run(11); 
       // bobj.Mun();
        
    }
}