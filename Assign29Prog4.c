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
   // PNODE Max = *Head;
    

    while(Head ->next != NULL)
    {
        if(Head->Data > Head->next->Data)
        {
            return = Head->Data;
        }
        Head=Head->next;
      
     
    }

   
   
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,240);
     InsertFirst(&First,1020);
    InsertFirst(&First,320);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);     

    iRet = Maximum(First);
    printf("Maximum Number is  %d\n",iRet);


    return 0;
}