
class Demo extends Thread
{
    String Name = Thread.currentThread().getName();
    int i;

    public void run()
    {
   
    for(i = 1 ; i < 10 ; i++)
    {
        try{
        System.out.println("Thread is: " +Name+ "Counter is"+i);
        Thread.sleep(10000);
    }
    catch(Exception eobj)
    {

    }
    }
   
    System.out.println("End of thread");
}
}

class Multithreading
{
    public static void main(String arg[])throws Exception
    {
        System.out.println("Current Thread is :"+Thread.currentThread().getName());

        Demo dobj = new Demo();
        

        dobj.setName("Thread 1");

        dobj.getPriority();

        dobj.start();
        
        dobj.join();
    }
}