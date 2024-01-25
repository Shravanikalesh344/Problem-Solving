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

void SumDigit(PNODE Head)
{
    printf("Addition is : \n");
   int iDigit = 0;
   
  
    while(Head != NULL)
    {
        int iSum = 0;
        while(Head->Data != 0)
        {
            
            iDigit = Head->Data % 10;
            iSum = iSum + iDigit;
            Head->Data = Head->Data/10;

        } 
         Head = Head->next; 
        printf("%d\n",iSum);
       
         
    }
   }

int main()
{
    PNODE First = NULL;
    int iRet = 0;

 //   InsertFirst(&First,121);
   // InsertFirst(&First,496);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);

   SumDigit(First); 
  
  //  Display(First);    



    return 0;
}