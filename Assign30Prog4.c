// Searching Last Occurance in the linkedlist

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else 
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("LinkedList is : \n");

    while(Head != NULL)
    {
        printf("| %d | ->",Head->Data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Maximum(PNODE Head)
{
    PNODE Max = Head;
    PNODE temp = Head;
    PNODE temp2 = Head;
    PNODE SecondMaximum = Head;

      while(temp ->next != NULL)
    {
        if(temp->Data > temp->next->Data)
        {
            Max->Data = temp->Data;
        }
        temp = temp->next; 
    }
   
    while(temp2->next != NULL)
    {
        if((temp2->Data >= SecondMaximum->Data)&&(temp2->Data < Max->Data))
        {
             SecondMaximum->Data = temp2->Data;
        }
        temp2 = temp2->next;
    }

  return SecondMaximum->Data;
   
   
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,240);
    InsertFirst(&First,320);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);     

    iRet = Maximum(First);
    printf("Second Maximum Number is  %d\n",iRet);


    return 0;
}