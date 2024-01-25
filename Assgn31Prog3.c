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

void DisplayProduct(PNODE Head)
{
    
   int iDigit = 0;
  
   while(Head != NULL)
    {
         int iMul = 1;
    
        while(Head->Data != 0)
        {
             iDigit = Head->Data % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
            iMul = iMul * iDigit;
            Head->Data = Head->Data/10;
        }
        printf("Product is : %d\n",iMul);
         Head = Head->next; 
        }
         
    }
   

int main()
{
    PNODE First = NULL;
    int iRet = 0;

   
    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    DisplayProduct(First); 
  
  //  Display(First);    



    return 0;
}