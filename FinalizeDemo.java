
class Employee
{
    public String Name ;
    public int Salaray;
    public int Age;
    public String Address;

    Employee(String str ,  int Amount , int A , String addr)
    {
        this.Name = str;
        this.Amount = Salaray;
        this.Age = Age;
        this.Address = addr;
    }
    void Display()
    {
        System.out.println("Employee Name :"+this.Name);
        System.out.println("Employee Salaray :"+this.Salaray);
        System.out.println("Employee Age :"+this.Age);
        System.out.println("Employee Address :"+this.Address);
    }
}

class FinalizeDemo
{
    public static void main(String args[])
    {
        Employee eobj = new Employee("Shravani",100000,21,"Bavdhan Pune");
        eobj.Display();

    }
}