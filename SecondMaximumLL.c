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

int SecondMaximum(PNODE Head)
{
     int iMax = Head->data;
     int iSMax = Head->data;
     PNODE temp = Head;
    while(Head != NULL)
    {
       if(Head->data >= iMax)
        {
            iMax = Head->data;
            Head = Head->next;
        }
        else
        {
        Head = Head->next;
        }
    }
   // printf("%d\n",iMax);
    while(temp != NULL)
    {    
     if((temp->data < iMax)&&(temp->data >= iSMax))
     {
        iSMax = temp->data;
        temp = temp->next;
     }
     else
     {
     temp = temp->next;
    }
    }
    
   // printf("%d\n",iSMax);

   return iSMax;
    
    
   
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,270);
    InsertFirst(&First,250);
    InsertFirst(&First,320);
    InsertFirst(&First,250);

    Display(First);
    int iRet = 0;
    iRet = SecondMaximum(First);

    printf("Second Maximum Number  : %d\n",iRet);
}