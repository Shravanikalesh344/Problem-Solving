// Linked List

#include<stdio.h>
#include<stdlib.h>

//Structure Declration
struct node
{
    int Data;           //4 bytes
    struct node *next;  //8 bytes
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head , int No)
{
    //Step 1 : Allocate memory for node 
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    //Step 2 : Initialize the node 
    newn->data = No;
    newn->next = NULL;

    //Step 3 : Check Whether Linked list is empty or not
    if(*Head == NULL) // LL is empty
    {
        *Head = newn;
    }
    else        //LL contains at least 1 node in it 
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

int main()
{
    PNODE First  = NULL;

    InsertFirst(&First , 51);
    InsertFirst(&First , 21);
    InsertFirst(&First , 11);

    return 0;
}
