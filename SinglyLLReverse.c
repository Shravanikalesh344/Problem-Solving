#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertFirst(PPNODE head , int No)
{
     PNODE newn = (PNODE)malloc(sizeof(NODE));

     newn->data = No;
     newn->next = NULL;

     if(*head == NULL)
     {
         *head = newn;
     }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

void InsertLast(PPNODE head , int No)
{
     PNODE newn = (PNODE)malloc(sizeof(NODE));
     PNODE temp = *head;

     newn->data = No;
     newn->next = NULL;

     if(*head == NULL)
     {
         *head = newn;
     }
     else
    {
        while(temp->next != NULL)
        {
             temp = temp->next;
        }
        temp->next = newn;

    }
}
void DisplayLL(PPNODE *head)
{
    PNODE temp = *head;
   

    while(temp -> next != NULL)
    {
        printf("|%d|->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int CountEle(PNODE head)
{
    int iCnt = 0;
    while(head -> next != NULL)
    {
        iCnt++;
        head = head->next;
    }

    return iCnt;
}

void ReverseLL(PPNODE *head)
{
    printf("Reversed LinkedList  is :\n");
    int iCnt = 0;
    PNODE temp = *head;
    PNODE prevNode = NULL;
    PNODE nextNode;


    while(temp!= NULL)
    {
        nextNode = temp->next;
        temp->next = prevNode;
        prevNode = temp;
        temp = nextNode;
    }

    *head = prevNode;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    InsertFirst(&First,111);

   // InsertLast(&First,111);

    printf("Original LinkedList is:\n");
    DisplayLL(&First);

    iRet = CountEle(First);
    printf("Number of elements in the linkedlist are: %d\n",iRet);

    ReverseLL(&First);

    DisplayLL(&First);

    free(First);
    
    return 0;
}