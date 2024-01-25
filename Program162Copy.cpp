//Program for doubly linear linkedlist
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE,*PNODE;

class DoublyLL
{
    private:
        PNODE first;
        int Count;
    
    public :

        DoublyLL();
       void InsertFirst(int no);
       void InsertLast(int no);
       void Display();
       int CountNode();
       void InsertAtPos(int no , int iPos);
       void DeleteFirst();
       void DeleteLast();
       void DeleteAtPos(int iPos);

};

DoublyLL :: DoublyLL()
{
    first = NULL;
    Count = 0;
}

void DoublyLL :: InsertFirst(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else 
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }
    Count++;
}
void DoublyLL :: InsertLast(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else 
    {
        PNODE head = first;
        while(head->next != NULL)
        {
            head = head->next;
        }
        head->next = newn;
        newn->prev = head;

    }
    Count++;
}
void DoublyLL :: Display()
{
    PNODE head = first;
    cout<<"Elements in the LinkedList are :";

    while(head != NULL)
    {
        cout<<"|"<<head->data<<"| ->";
        head = head->next;
    }
    cout<<"NULL";
}
int DoublyLL :: CountNode()
{
    return Count;
}
void DoublyLL :: DeleteFirst()
{
     if(first == NULL)   // empty LL
    {
        return;
    }
    else if((first -> next == NULL) && (first -> prev == NULL)) // Single node
    {                                                               // #    
        delete first;
        first = NULL;
    }
    else
    {
        PNODE head = first;
        head = head -> next;
        delete head -> prev;
        head -> prev = NULL;
    }
}
void DoublyLL :: DeleteLast()
{
    if(first == NULL)   // empty LL
    {
        return;
    }
    else if((first -> next == NULL) && (first -> prev == NULL)) // Single node
    {                                                               // #    
        delete first;
        first = NULL;
    }
    else 
    {
        PNODE head = first;
        while(head->next->next !=NULL)
        {
            head = head->next;
        }
        delete head->next;
        head->next = NULL;

    }
    Count--;

}
void DoublyLL :: InsertAtPos(int no,int iPos)
{
    if((iPos < 1)&&(iPos > Count+1))
    {
        cout<<"Invalid Position";
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos >Count+1)
    {
        InsertLast(no);
    }
    else 
    {
        PNODE newn = new NODE;
        newn->data = no;
        newn->next = NULL;
        PNODE head = first;

        for(int iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
        {
            head = head->next;
        }
        newn->next = head->next;
        head->next->prev = newn;
        newn->prev = head;
        head->next = newn;
    }

}
void DoublyLL :: DeleteAtPos(int iPos)
{
    if((iPos < 1)&&(iPos > Count))
    {
        cout<<"Invalid Position";
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos >Count)
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
        head->next = head->next->next;
        delete head->next->prev;
        head->next->prev = head;

    }
    Count--;
}

int main()
{

    DoublyLL dlobj;
    int iRet = 0;

    dlobj.InsertFirst(51);
    dlobj.InsertFirst(21);
    dlobj.InsertFirst(11);

    dlobj.InsertLast(101);
    dlobj.InsertLast(111);
    dlobj.InsertLast(121);


    dlobj.Display();

    iRet =dlobj.CountNode();
    cout<<"\nNumber of Elements in the linked list are :"<<iRet<<"\n";

    dlobj.DeleteLast();
    dlobj.Display();

    iRet =dlobj.CountNode();
    cout<<"\nNumber of Elements in the linked list are :"<<iRet<<"\n";


     dlobj.InsertAtPos(105,5);
    dlobj.Display();

    iRet =dlobj.CountNode();
    cout<<"\nNumber of Elements in the linked list are :"<<iRet<<"\n";


    dlobj.DeleteAtPos(5);
    dlobj.Display();

    iRet =dlobj.CountNode();
    cout<<"\nNumber of Elements in the linked list are :"<<iRet<<"\n";


    
    return 0;
}
