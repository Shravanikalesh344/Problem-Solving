// Linked List

#include<stdio.h>
#include<stdlib.h>

//Structure Declration
struct node
{
    int data;           //4 bytes
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
    if(*Head == NULL)   // LL is empty
    {
        *Head = newn;
    }
    else        //LL contains at least 1 node in it 
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

int Count(PNODE Head)
{
    int iCnt = 0;
    printf("Elements of Linked Lists are :\n");

    while(Head != NULL)
    {
        iCnt++;
        //printf("| %d | ->" , Head->data);
        Head = Head -> next;
    }
    return iCnt;
}

int main()
{
    PNODE First  = NULL;
    int iRet = 0;

    InsertFirst(&First , 51);   //InsertFirst(60,51)
    InsertFirst(&First , 21);
    InsertFirst(&First , 11);

    iRet = Count(First);

    printf("Number of nodes are : %d\n",iRet);

    return 0;
}
