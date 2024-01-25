
class Employee
{
    public String Name ;
    public int Salary;
    public int Age;
    public String Address;

    Employee(String str ,  int Amount , int A , String addr)
    {
        this.Name = str;
        this.Salary = Amount;
        this.Age = A;
        this.Address = addr;
    }

      protected void finalize()
    {
        System.out.println("Inside Finalize method ..");
    }
   


    void Display()
    {
        System.out.println("Employee Name :"+this.Name);
        System.out.println("Employee Salaray :"+this.Salary);
        System.out.println("Employee Age :"+this.Age);
        System.out.println("Employee Address :"+this.Address);
    }
   
}

class FinalizeDemo2
{
    public static void main(String args[])
    {
        Employee eobj = new Employee("Shravani",100000,21,"Bavdhan Pune");
        Employee eobj1 = eobj;
        
        Employee eobj2 = new Employee("Sumit",88000,23,"Bavdhan Pune");

        eobj.Display();
        System.out.println("Hash Code of eobj is :"+eobj.hashCode());
         System.out.println("Hash Code of eobj is :"+eobj1.hashCode());
        System.out.println("Hash Code of eobj is :"+eobj2.hashCode());
        eobj = null;
        System.gc();

    }
}