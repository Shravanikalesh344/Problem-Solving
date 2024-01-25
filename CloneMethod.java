
class Employee  implements 
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

      
   


    void Display()
    {
        System.out.println("Employee Name :"+this.Name);
        System.out.println("Employee Salaray :"+this.Salary);
        System.out.println("Employee Age :"+this.Age);
        System.out.println("Employee Address :"+this.Address);
    }

    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
   
}

class
{
    public static void main(String args[]) 
    {
        try
        {
        Employee eobj1 = new Employee("Shravani",100000,21,"Bavdhan Pune");
        
        Employee eobj2 = (Employee)eobj1.clone();

        System

        eobj1.Display();
        eobj2.Display();
        }
        catch(CloneNotSupportedException obj)
        {
            System.out.println("Inside Catch ..");
        }

       
    }
}