
class node
{
    public int data;
    public node next;

    public node(int no)
    {
        data = no;
        next = null;
    }
}

class SinglyCL
{
    private node first;
    private node last;
    private int Count;

    SinglyCL()
    {
        first = null;
        last = null;
        Count = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = new node(no);

        if((first == null)&&(last == null))
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }
        last.next = first;
        Count++;
    }
    public void InsertLast(int no)
    {
        node newn = new node(no);

        if((first == null)&&(last == null))
        {
            first = newn;
            last = newn;
        }
        else
        {
            last.next = newn;
            newn.next = first;
            last = newn;
        }
        last.next = first;
        Count++;
    }
    public void DeleteFirst()
    {
        if((first == null)&&(last == null))
        {
            return;
        }
        else if(first == last)
        {
            first = null;
            last = null;
        }
        else
        {
            first = first.next;
        }
        last.next = first;
        Count--;
    }
    public void DeleteLast()
    {
          if((first == null)&&(last == null))
        {
            return;
        }
        else if(first == last)
        {
            first = null;
            last = null;
        }
        else
        {
           node temp = first;

           while(temp.next != last)
           {
                temp = temp.next;
           }
           temp.next = null;
           temp.next = first;
           
        }
    //    last.next = first;
        Count--;
    }
    public void Display()
    {
        node head = first;
        node tail = last;

        System.out.println("Elements in the Singly Circular LinkedList Are :");
        if((head != null)&&(tail != null))
        {
        do 
        {
            System.out.print("|"+ head.data+"|->");
           head = head.next;
        }while(head != tail.next);

        }
        System.out.println();
    }
    
    public int Count()
    {
        return Count;
    }
    public void InsertAtPos(int no , int ipos)
    {
        if((ipos < 1)||(ipos > Count+1))
        {
            System.out.println("Invalid Position");
            return;
        }
        else if(ipos == 1)
        {
            InsertFirst(no);
        }
        else if(ipos == Count+1)
        {
            InsertLast(no);
        }
        else
        {
            node newn = new node(no);
            node temp = first;

            int iCnt = 0;

            for(iCnt = 1 ; iCnt < ipos-1 ; iCnt++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;
        }
        Count++;
    }
    public void DeleteAtPos(int ipos)
    {
        if((ipos < 1)||(ipos > Count))
        {
            System.out.println("Invalid Position");
            return;
        }
        else if(ipos == 1)
        {
            DeleteFirst();
        }
        else if(ipos == Count)
        {
            DeleteLast();
        }
        else
        {
            node temp = first;
            int iCnt = 0;
            for(iCnt = 1 ; iCnt < ipos-1 ; iCnt++)
            {
                temp = temp.next;
            }
            temp.next = temp.next.next;
        }
        Count--;
    }
}

class Program407
{
    public static void main(String arg[])
    {
        SinglyCL obj = new SinglyCL();
        int iRet = 0;

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements in the linkedlist are :"+iRet);

        obj.InsertLast(101);
        obj.InsertLast(121);
        obj.InsertLast(151);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements in the linkedlist are :"+iRet);

        obj.DeleteFirst();

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements in the linkedlist are :"+iRet);

         obj.DeleteLast();

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements in the linkedlist are :"+iRet);

        obj.InsertAtPos(105,3);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements in the linkedlist are :"+iRet);

        obj.DeleteAtPos(3);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements in the linkedlist are :"+iRet);

    }
}
