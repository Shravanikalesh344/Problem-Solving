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

void DisplaySmall(PNODE Head)
{
    
   int iDigit = 1;
   int temp = 0;
  
   while(Head != NULL)
    { 
        temp = iDigit;
        while(Head->Data != 0)
        {
              
             iDigit = Head->Data % 10;
             
             
             if(iDigit <= temp)
             {
                temp = iDigit;
             }
        
            Head->Data = Head->Data / 10; 
          
            
        }
            printf("%d\n",temp);
            Head = Head->next;
    }
}
      

int main()
{
    PNODE First = NULL;
    int iRet = 0;

   
    InsertFirst(&First,415);
    InsertFirst(&First,532);
    InsertFirst(&First,250);
    InsertFirst(&First,11);

    Display(First);

    DisplaySmall(First); 
  
  //  Display(First);    



    return 0;
}