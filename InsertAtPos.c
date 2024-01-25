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
void InsertLast(PPNODE Head , int No)
{
   
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next = newn;
    
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

int Count(PNODE Head)
{
   int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    } 
    return iCnt;
}
void InsertAtPos(PPNODE Head , int No , int Pos)
{
    
    int iSize = Count(*Head);
    PNODE newn = NULL;
    PNODE temp = *Head;
    if((Pos < 0)||(Pos > iSize+1))
    {
        printf("Invalid Position :\n");
        return;
    }
    if(Pos == 1)
    {
        InsertFirst(Head,No);
    }
    else if(Pos == iSize+1)
    {
        InsertLast(Head,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;
        int iCnt = 0;
        for(iCnt = 1 ; iCnt < Pos - 1 ; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

int main()
{
    PNODE First = NULL;

    int iPos = 0;
    int iData = 0;

    InsertFirst(&First,105);
    InsertFirst(&First,104);
    InsertFirst(&First,103);
    InsertFirst(&First,102);
    InsertFirst(&First,101);

    Display(First);

    printf("Enter the value you want to insert :\n");
    scanf("%d",&iData);

    printf("Enter the Pos on which you want to insert the data ?\n");
    scanf("%d",&iPos);

    InsertAtPos(&First,iData,iPos);

    Display(First);


}