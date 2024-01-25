#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE , *PNODE , **PPNODE;

void InsertFirst(PPNODE Head , int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(PNODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;

    }
}

void Display(PNODE Head)
{
    printf("LinkedList is :\n");
    while(Head != NULL)
    {
        printf("|%d|->",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

void Reverse(PNODE Head)
{
    printf("Reversed LinkedList is :\n");
    int iCnt = 0;
   
    

    while(Head != NULL)
    {
        int iDigit = 0;
         int iRev = 0;
        while(Head->data != 0)
        {
            iDigit = Head->data % 10;

            Head->data = Head->data / 10;

            iRev = (iRev * 10)+iDigit;
        }
        printf("|%d|->",iRev);
        Head = Head->next;
    }
   
    printf("NULL\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,28);
    InsertFirst(&First,56);
    InsertFirst(&First,79);
    InsertFirst(&First,65);

    Display(First);

    Reverse(First);
}