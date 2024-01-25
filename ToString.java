
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


}

class ToString
{
    public static void main(String args[]) 
    {
        
    Employee eobj1 = new Employee("Shravani",100000,21,"Bavdhan Pune");

    System.out.println(eobj1);
        
       
       
    }
}
