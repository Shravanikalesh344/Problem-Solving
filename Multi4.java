
class Demo extends Thread
{
    public void run()
    {
        String name = Thread.currentThread().getName();

        for(int i = 1 ;i< 1000 ; i++)
        {}
        System.out.println("End of Thread");
       
    }
}

class Multi4
{
    public static void main(String arg[]) throws Exception
    {
        System.out.println("Current Thread is :"+Thread.currentThread().getName());

        Demo obj1 = new Demo(); //New state
        
        obj1.setName("First Thread");
       
        obj1.start(); // Runnable State

        obj1.join();

        System.out.println("End of main thread");
       

    }
}