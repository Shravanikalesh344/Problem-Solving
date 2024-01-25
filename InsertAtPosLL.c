#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

typedef struct node   NODE;
typedef struct node *PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head , int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

void InsertLast(PPNODE head , int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *head;

    newn->data = No;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
             temp = temp->next;
        }
        temp->next = newn;
    }
}
void Display(PNODE head)
{
     printf("LinkedList is :\n");

     while(head!= NULL)
     {
        printf("|%d|->",head->data);
        head = head->next;
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

void InsertAtPos(PPNODE head ,int No , int Pos)
{
     PNODE newn = NULL; 
     int iCnt = 0;
     PNODE temp = *head;

     int iSize = Count(*head);

     if((Pos < 0)||(Pos > iSize +1))
     {
         printf("Invalid Position\n");
         return;
     }
     else if(Pos == 1)
     {
        InsertFirst(head , No);
     }
     else if(Pos == iSize+1)
     {
         InsertLast(head , No);
     }
     else
     {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;
          for(iCnt = 1 ; iCnt < Pos -1 ; iCnt++)
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
    int iNo = 0;
    int iPos = 0;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);

    InsertLast(&First,111);

    Display(First);

    printf("Enter the Number to Insert :\n");
    scanf("%d",&iNo);

    printf("Enter the Position on which you want to insert:\n");
    scanf("%d",&iPos);

    InsertAtPos(&First,iNo,iPos);    
    Display(First);


    return 0;
}