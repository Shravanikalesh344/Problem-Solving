
class Demo extends Thread
{
    public void run()
    {
        String name = Thread.currentThread().getName();

        for(int i = 1 ;i< 10 ; i++)
        {
            try
            {
                System.out.println("Values of i is :"+i);
                Thread.sleep(5000);
            }
            catch(Exception obj)
            {

            }

        }
        System.out.println("End of Thread");
       
    }
}

class Multi5
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