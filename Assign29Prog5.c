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

int Minimum(PNODE Head)
{
   PNODE temp = Head->Data;
   while(Head ->next != NULL)
    {
        if(temp < Head->next->Data)
        {
           // temp = Head->Data;  
             Head = Head->next;  
        }
        else 
        {
            temp = Head->next ->Data;
            Head = Head->next;
        }
       
      
    }
     return temp;
 
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,5); 
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,40);
    InsertFirst(&First,230);
  InsertFirst(&First,110);

    Display(First);     

    iRet = Minimum(First);
    printf("Minimum Number is  %d\n",iRet);


    return 0;
}