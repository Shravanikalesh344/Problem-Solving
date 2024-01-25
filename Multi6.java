
class Demo extends Thread
{
    public void run()
    {
        
    }

    synchronized public void Display()
    {
        
    }
}


class Multi6
{
    public static void main(String arg[]) throws Exception
    {
        System.out.println("Current Thread is :"+Thread.currentThread().getName());

        Demo obj1 = new Demo(); //New state
        Demo obj2 = new Demo();
        
        obj1.start(); // Runnable State
        obj2.start();

      
        System.out.println("Priority of obj1 is :"+obj1.getPriority());
        System.out.println("Priority of obj2 is :"+obj2.getPriority());
      
        obj1.setPriority(8);
        obj2.setPriority(10);
         System.out.println("Priority of obj1 is :"+obj1.getPriority());
          System.out.println("Priority of obj1 is :"+obj2.getPriority());
      
      
       

    }
}

// MIN_PRIORITY 1
// NORM_PRIORITY 5
// MAX+PRIORITY 10