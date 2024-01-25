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
            first = NULL;
            Count = 0;
        }

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no , int ipos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
        void Display();
};

int main()
{
    SinglyLL lobj;

    lobj.InsertFirst(51);
    lobj.InsertFirst(21);
    lobj.InsertFirst(11);

    lobj.InsertLast(101);

    

    return 0;
}