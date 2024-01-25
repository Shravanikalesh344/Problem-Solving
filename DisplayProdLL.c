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

void DisplayProd(PNODE Head)
{
   
    while(Head != NULL)
    {
        int iDigit = 0;
         int Prod = 1;
        while(Head ->data != 0)
        {
            iDigit = Head->data % 10;

            if(iDigit == 0)
            {
                iDigit = 1;
            }
            Prod = Prod * iDigit;

            Head->data = Head->data / 10;
        }
         printf("%d\t",Prod);
         Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,20);
    InsertFirst(&First,32);
    InsertFirst(&First,41);
    InsertFirst(&First,65);

    Display(First);

    DisplayProd(First);
}