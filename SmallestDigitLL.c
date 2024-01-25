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

    newn = (PNODE)malloc(sizeof(NODE));
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

void DisplaySmall(PNODE Head)
{
    while(Head != NULL)
    {
        
        int itemp = 0;
        int iDigit = 0;
        iDigit =  Head->data % 10;
        int iSmall = iDigit;
        while(Head->data != 0)
        {
            iDigit = Head->data % 10;
           
            Head->data = Head->data / 10;

        if(iDigit <= iSmall)
        {
            iSmall = iDigit;
        }
        }

        printf("%d\t",iSmall);
        
        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,250);
    InsertFirst(&First,532);
    InsertFirst(&First,415);

    Display(First);

    DisplaySmall(First);
}