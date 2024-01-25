//Doubly Circular

#include<iostream>

using namespace std;

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE , *PNODE;


class DoublyCL
{
    private:
        PNODE first;
        PNODE last;
        int Count;

    public:
        DoublyCL();

        void InsertFirst(int no);
        
        void InsertLast(int no);
        
        void Display();
       
        int CountNode();

        void DeleteFirst();

        void DeleteLast();

        void InsertAtPos(int no ,int iPos);

        void DeleteAtPos(int iPos);
        
};

DoublyCL :: DoublyCL()
{
    first = NULL;
    last = NULL;
    
    Count = 0;
}
void DoublyCL :: InsertFirst(int no)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((first == NULL)&&(last == NULL))
    {
        first = newn;
        last = newn;
    }
    else 
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }
    last->next = first;
    first->prev = last;
    Count++;

}
void DoublyCL ::InsertLast(int no)
{
   
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    PNODE tail = last;
    PNODE head = first;

    if((head == NULL)&&(tail == NULL))
    {
        first = newn;
        last = newn;
    }
    else 
    {
        
        newn->prev = tail;
        tail->next = newn;
        tail = newn;
    }
    tail->next = head;
    head->prev = tail;
    Count++;
    
}
void DoublyCL :: Display()
{
    PNODE head = first;
    PNODE tail = last;
 //   cout<<"Elements in the Doubly  Circular LinkedList is :"<<"\n";


    if(head != NULL && tail != NULL)
    {
        do
        {
           cout<<"|"<<head->data<<"| <=>";
            head = head->next;
        }while(head != tail->next);
    }
    
}
int DoublyCL :: CountNode()
{ 
    return Count; 
}
void DoublyCL ::DeleteFirst()
{
   if((first == NULL) && (last == NULL))    // LL is empty
    {
        return;
    }
    else if(first == last)   // LL contains single node
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else    // LL contains more than one node
    {
        PNODE head = first;
        PNODE tail = last;

        head = head->next;
        delete tail->next;    // free((*Head)->prev);
        head->prev = tail;
        tail->next = head;
    }
    Count--;
    

}
void DoublyCL :: DeleteLast()
{
    if((first == NULL) && (last == NULL))    // LL is empty
    {
        return;
    }
    else if(first == last)   // LL contains single node
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else    // LL contains more than one node
    {
        PNODE head = first;
        PNODE tail = last;   
        tail = tail->prev;
        delete tail->next;
        tail->next = head;
        head->prev = tail;
        
    }
    Count--;
}
void DoublyCL :: InsertAtPos(int no , int iPos)
{
    if((iPos < 1)||(iPos > Count+1))
    {
        cout<<"Invalid Position";
        return;
    }
   else if(iPos==1)
    {
        InsertFirst(no);
    }
    else if(iPos > Count+1)
    {
        InsertLast(no);
    }
    else 
    {
        PNODE newn = new NODE;
        newn->data = no;
        newn->prev = NULL;
        newn->next = NULL;
        PNODE head = first;
        PNODE tail = last;

        for(int iCnt=1 ; iCnt < iPos-1;iCnt++)
        {
            head = head->next;
        }
        newn->next = head->next;
        head->next->prev = newn;
        head->next = newn;
        newn->prev = head;
    }
    Count++;
}
void DoublyCL :: DeleteAtPos(int iPos)
{
    if((iPos < 1)||(iPos > Count))
    {
        cout<<"Invalid Position";
    }
    else if(iPos==1)
    {
        DeleteFirst();
    }
    else if(iPos > Count)
    {
        DeleteLast();
    }
    else 
    {
        PNODE head = first;
        PNODE tail = last;
        for(int iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
        {
            head = head->next;
        }
        head->next=  head->next->next;
        delete head->next->prev;
        head->next->prev = head;

    }
    Count--;
}         

int main()
{
    
    DoublyCL dlobj;

    int iRet = 0;

    dlobj.InsertFirst(111);
    dlobj.InsertFirst(101);
    dlobj.InsertFirst(51);
    dlobj.InsertFirst(21);


     dlobj.InsertLast(121);
     dlobj.InsertLast(151);

     dlobj.Display();
   
    iRet = dlobj.CountNode();
    cout<<"\nNumber of elements in the linkedlist are :"<<iRet<<"\n";

    dlobj.DeleteFirst();
   // dlobj.Display();
    iRet = dlobj.CountNode();
    cout<<"\nNumber of elements in the linkedlist are :"<<iRet<<"\n";

    dlobj.Display();


    dlobj.DeleteLast();
    //dlobj.Display();
    iRet = dlobj.CountNode();
    cout<<"\nNumber of elements in the linkedlist are :"<<iRet<<"\n";
    // dlobj.Display();


    dlobj.InsertAtPos(11,2);
    iRet = dlobj.CountNode();
    cout<<"\nNumber of elements in the linkedlist are :"<<iRet<<"\n";
  //  dlobj.Display();


    dlobj.Display();


    dlobj.DeleteAtPos(2);
    iRet = dlobj.CountNode();
    cout<<"\nNumber of elements in the linkedlist are :"<<iRet<<"\n";



    
    





    


    return 0;
}