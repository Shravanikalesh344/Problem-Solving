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

void Reverse(PNODE Head)
{
    printf("Reverse Number  is : \n");
   int iDigit = 0;
  
   
  
    while(Head != NULL)
    {
          int iRev = 0;
        while(Head->Data != 0)
        {
           
            
            iDigit = Head->Data % 10;
           
            Head->Data = Head->Data/10;
            iRev = (iRev * 10)+ iDigit;
           
         } 
         printf("%d\n",iRev);
         Head = Head->next; 
       
         
    }
   }

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    Display(First);

    Reverse(First); 
  
  //  Display(First);    



    return 0;
}