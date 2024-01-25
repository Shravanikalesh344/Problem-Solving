#include<iostream>

using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE , *PNODE , **PPNODE;


class SinglyLL
{
    public:
        PNODE first;
        int Count;

        SinglyLL()
        {
            cout<<"Inside Constructor\n";
            first = NULL;
            Count = 0;
        }

        void InsertFirst(int no)
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
        void InsertLast(int no)
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
       
        void Display()
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
};

int main()
{
    SinglyLL lobj;

    lobj.InsertFirst(111);
    lobj.InsertFirst(101);
    lobj.InsertFirst(51);
    lobj.InsertFirst(21);
    lobj.InsertFirst(11);

    lobj.InsertLast(121);
    lobj.InsertLast(151);
    lobj.InsertLast(201);

    lobj.Display();

    cout<<"Number of elements in the linked list are :"<<lobj.Count<<"\n";

    

    return 0;
}