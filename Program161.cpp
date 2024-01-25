//Singly Circular

#include<iostream>

using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE , *PNODE;


class SinglyCL
{
    private:
        PNODE first;
        PNODE last;
        int Count;

    public:
        SinglyCL();

        void InsertFirst(int no);
        
        void InsertLast(int no);
        
        void Display();
       
        int CountNode();

        void DeleteFirst();

        void DeleteLast();

        void InsertAtPos(int no ,int iPos);

        void DeleteAtPos(int iPos);
        
};

SinglyCL ::SinglyCL()
{
   
    first = NULL;
    last = NULL;
    
    Count = 0;
}
void SinglyCL :: InsertFirst(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if((first == NULL)&&(last == NULL))
    {
        first = newn;
        last = newn;
    }
    else 
    {
        newn->next = first;
        first = newn;
    }
    last->next = first;
    Count++;
}
void SinglyCL ::InsertLast(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if((first == NULL)&&(last == NULL))
    {
        first = newn;
        last = newn;
    }
    else 
    {
        last->next = newn;
        last = newn;
    }
    last->next = first;
    Count++;

}
void SinglyCL :: Display()
{
    PNODE head = first;
    PNODE tail = last;
    cout<<"Elements in the LinkedList are :";

    if((head != NULL)&&(tail != NULL))
    {
        do 
        {
            cout<<"|"<<head->data<< "| ->";
            head = head->next;
        }while(head != tail->next);

       
    }
}
int SinglyCL :: CountNode()
{ 
    return Count; 

}

void SinglyCL ::DeleteFirst()
{
    if((first == NULL)&&(last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else 
    {
        PNODE head = first;
        first = first->next;
        delete head;
    }
    last->next = first;
    Count--;

}
void SinglyCL :: DeleteLast()
{
     if((first == NULL)&&(last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else 
    {
        PNODE head = first;
        while(head->next != last)
        {
            head = head->next;
        }   
        delete last;
        last = head;
        last->next = first;
        Count--;

    }

}
void SinglyCL :: InsertAtPos(int no , int iPos)
{
    if((iPos < 1)||(iPos > Count+1))
    {
        cout<<"Invalid Position";
    }
    else if(iPos == 1) 
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
        newn->next = NULL;
        PNODE head = first;

        for(int iCnt = 1 ; iCnt < iPos -1; iCnt++)
        {
                head = head->next;
        }
        newn->next = head->next;
        head->next = newn;
        
    }
    Count++;
}
void SinglyCL :: DeleteAtPos(int iPos)
{
    if((iPos < 1)||(iPos > Count))
    {
        cout<<"Invalid Position";
    }
    else if(iPos == 1) 
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
        for(int iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
        {
            head = head->next;
        }
        PNODE Targetednode = head->next;
        head->next = head->next->next;
        delete Targetednode;

    }   
    Count--;
}       

int main()
{

    SinglyCL clobj;
    int iRet = 0;

    clobj.InsertFirst(111);
    clobj.InsertFirst(101);
    clobj.InsertFirst(51);
    clobj.InsertFirst(21);
    clobj.InsertFirst(11);


    clobj.InsertLast(121);
    clobj.InsertLast(151);
    clobj.InsertLast(201);

    clobj.Display();

    iRet = clobj.CountNode();
    cout<<"\nNumber of elements in the linked list are :"<<iRet<<"\n";

    clobj.DeleteFirst();
     clobj.Display();

    iRet = clobj.CountNode();
    cout<<"\nNumber of elements in the linked list are :"<<iRet<<"\n";


    clobj.DeleteLast();
     clobj.Display();

    iRet = clobj.CountNode();
    cout<<"\nNumber of elements in the linked list are :"<<iRet<<"\n";

    clobj.InsertAtPos(105,5);
     clobj.Display();

    iRet = clobj.CountNode();
    cout<<"\nNumber of elements in the linked list are :"<<iRet<<"\n";
    

     clobj.DeleteAtPos(5);
     clobj.Display();

    iRet = clobj.CountNode();
    cout<<"\nNumber of elements in the linked list are :"<<iRet<<"\n";
    


   return 0;
}