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

void DisplayPalindrome(PNODE Head)
{
    while(Head != NULL)
    {
        int itemp = Head->data;
         int iDigit = 0;
         int iRev = 0;
        while(Head->data != 0)
        {
            iDigit = Head->data % 10;

            Head->data = Head->data / 10;

            iRev = (iRev * 10)+iDigit;
           
        }
        if(itemp == iRev)
        {
           
            printf("%d\t",itemp);
        }
        Head = Head->next;
       
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,28);
    InsertFirst(&First,6);
    InsertFirst(&First,414);
    InsertFirst(&First,65);

    Display(First);

    DisplayPalindrome(First);
}