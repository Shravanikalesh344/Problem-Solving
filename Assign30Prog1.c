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

void DisplayPerfect(PNODE Head)
{
    printf("Perfect Numbers are :\n");
    int iCnt = 1;
    while(Head != NULL)
    {
        if(Head->Data % (Head->Data / 2 )== 0)
        {
            printf("%d\n",Head->Data);
            iCnt++;
        }
        Head = Head->next;
        iCnt++;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,121);
    InsertFirst(&First,496);
    InsertFirst(&First,6);
    InsertFirst(&First,51);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    Display(First);

    DisplayPerfect(First); 
  //  Display(First);    



    return 0;
}