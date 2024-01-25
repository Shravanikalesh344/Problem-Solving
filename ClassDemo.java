
class Marvellous
{
    public int i;
    public int j;

    public Marvellous()
    {
        System.out.println("Inside Default Constructor");
        this.i = 0;
        this.j = 0;
    }
    public Marvellous(int a, int b)
    {
        System.out.println("Inside Parametrized constructor");
        this.i = a;
        this.j = b;

    }
    public void Fun()
    {
        System.out.println("Inside Fun Method");
    }
}

class ClassDemo
{
    public static void main(String arg[])
    {
        System.out.println("Inside Main");

        Marvellous mobj = new Marvellous(); // Default Construcotr

        Marvellous mobj1 = new Marvellous(11,21); // Parametrized Constructor

        System.out.println(mobj1.i);
        System.out.println(mobj1.j);

        mobj1.Fun();
    }
}