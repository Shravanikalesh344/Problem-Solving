#include<iostream>

using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE , *PNODE , **PPNODE;


class SinglyLL
{
    private:
        PNODE first;
        int Count;

    public:
        SinglyLL();

        void InsertFirst(int no);
        
        void InsertLast(int no);
        
        void Display();
       
        int CountNode();

        void DeleteFirst();

        void DeleteLast();

        void InsertAtPos(int no ,int iPos);

        void DeleteAtPos(int iPos);
        
};
/* 
return_value class_name :: Function_name()
{

}
*/

SinglyLL ::SinglyLL()
{
cout<<"Inside Constructor\n";
first = NULL;
Count = 0;
}

void SinglyLL :: InsertFirst(int no)
{
PNODE newn = new NODE;


newn->data = no;
newn->next = NULL;

if(first == NULL) //if(Count == 0)
{
    first = newn;
    
}
else 
{
    newn->next = first;
    first = newn;
}
Count++;

}
void SinglyLL ::InsertLast(int no)
{
    PNODE newn = new NODE;
    PNODE temp = first;

newn->data = no;
newn->next = NULL;

if(first == NULL) //if(Count == 0)
{
    first = newn;
    
}
else 
{
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next = newn;
}
Count++;
}

void SinglyLL :: Display()
{
PNODE temp = first;

cout<<"Number of Linked/list are : \n";
while(temp != NULL) //type 1
{
    
    cout<<"|"<<temp->data<<" | ->";
        temp = temp->next;
}
cout<<"\n";
}

int SinglyLL :: CountNode()
{
return Count;
}

void SinglyLL ::DeleteFirst()
{
   
    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else 
    {
        PNODE temp = first;

        first = first->next;
        delete temp;
    }
    Count--;
}

void SinglyLL :: DeleteLast()
{
   if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete(first);
        first = NULL;
    }
    else 
    {
        PNODE temp = first;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;

    }
    Count--;
}

void SinglyLL :: InsertAtPos(int no , int iPos)
{
    
 if((iPos < 0) ||(iPos > Count+1))
    {
        cout<<"Invalid Position\n";
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == Count+1)
    {
        InsertLast(no);
    }
    else 
    {
        PNODE newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        PNODE temp = first;

        int i = 0;

        for(i = 1 ; i< iPos-1 ; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

        Count++;
        
    }
}

void SinglyLL :: DeleteAtPos(int iPos)
{
    if((iPos < 0) ||(iPos > Count))
    {
        cout<<"Invalid Position\n";
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == Count)
    {
        DeleteLast();
    }
    else 
    {
        PNODE temp = first;


        int i = 0;

        for(i = 1 ; i< iPos-1 ; i++)
        {
            temp = temp->next;
        }
        PNODE Targetednode = temp->next;
        temp->next = temp->next->next;
        delete Targetednode;

        Count--;
    }
}         

int main()
{
    SinglyLL lobj;
    int iRet = 0;

    lobj.InsertFirst(111);
    lobj.InsertFirst(101);
    lobj.InsertFirst(51);
    lobj.InsertFirst(21);
    lobj.InsertFirst(11);

    lobj.InsertLast(121);
    lobj.InsertLast(151);
    lobj.InsertLast(201);

    lobj.Display();

     iRet = lobj.CountNode();
    cout<<"Number of elements in the linked list are :"<<iRet<<"\n";

    lobj.InsertAtPos(151,4);
    lobj.Display();

    iRet = lobj.CountNode();
    cout<<"Number of elements in the linked list are :"<<iRet<<"\n";


    lobj.DeleteAtPos(7);
    lobj.Display();

    iRet = lobj.CountNode();
    cout<<"Number of elements in the linked list are :"<<iRet<<"\n";

    lobj.DeleteFirst();
    lobj.Display();


    iRet = lobj.CountNode();
    cout<<"Number of elements in the linked list are :"<<iRet<<"\n";

    lobj.DeleteLast();
    lobj.Display();

    iRet = lobj.CountNode();
    cout<<"Number of elements in the linked list are :"<<iRet<<"\n";

    return 0;
}