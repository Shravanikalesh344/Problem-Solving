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

void DisplayPerfect(PNODE Head)
{
    while(Head != NULL)
    {
      int iCnt = 0;
      int iSum = 0;

      for(iCnt = 1; iCnt <= Head->data / 2 ; iCnt++)
      {
            if((Head->data % iCnt)== 0)
            {
            iSum = iSum + iCnt;
            }
      }
      if(iSum == Head->data)
      {
        printf("%d\t",Head->data);
        Head = Head->next;
      }
      else
      {
        Head = Head->next;
      }

      
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,28);
    InsertFirst(&First,17);
    InsertFirst(&First,6);

    Display(First);

    DisplayPerfect(First);
}