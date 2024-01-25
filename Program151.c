#include<stdio.h>
#include<stdlib.h>

struct NODE
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct NODE  NODE;
typedef struct  NODE *PNODE;
typedef struct NODE  **PPNODE;

void InsertFirst(PPNODE Head , int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->prev = NULL;
    newn->next = NULL;  // #

    if(*Head == NULL) // LL is empty
    {
        *Head = newn;
    }

    else 
    {
        newn->next = *Head;
        (*Head)->prev = newn;   //#
        *Head = newn;

    }

}
void InsertLast(PPNODE Head ,  int No)
{
     PNODE temp = *Head;
     PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->prev = NULL;
    newn->next = NULL;

    if(*Head == NULL) // LL is empty
    {
        *Head = newn;
    }

    else 
    {
        while(temp->next != NULL)
        {
            temp= temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
}

void Display(PNODE Head)
{
    printf("Contents of LinkedList are  :\n");
    
    printf("NULL <=>");
    while(Head != NULL)
    {
        printf("|%d| <=>" ,Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}
int Count(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        Head = Head->next;
        iCnt++;
    }
    return iCnt;
}



void DeleteFirst(PPNODE Head)
{
    if(*Head == NULL)
    {
        return;
    }
    else if(((*Head)->next == NULL) && ((*Head)->prev == NULL)) // # Single node
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
       *Head = (*Head)->next;
       free((*Head)->prev);
       (*Head)->prev = NULL;
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;
    if(*Head == NULL)
    {
        return;
    }
    else if(((*Head)->next == NULL) && ((*Head)->prev == NULL)) // # Single node
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }   
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE Head , int No , int iPos)
{
    int Size = 0;
    Size = Count(*Head);
    PNODE newn = NULL;
    int i =0;
    PNODE temp = *Head;

    if((iPos < 1)||(iPos > (Size+1)))
    {
        printf("Invalid Position");
        return;
    }   
    if(iPos ==1)
    {
        InsertFirst(Head , No);

    }
    else if(iPos == Size+1)
    {
        InsertLast(Head , No);
    }
    else 
    {
        newn =(PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->prev = NULL;  // #
        newn->next = NULL;

        for(i = 1 ; i< iPos -1 ; i++)
        {
            temp = temp->next;
        }   
        newn->next = temp->next;
        temp->next->prev = newn;    // #
        newn->prev = temp;
        temp->next = newn;          // #
  }
}

void DeleteAtPos(PPNODE Head , int iPos)
{
    int Size = 0;
    Size = Count(*Head);
    PNODE newn = NULL;
    int i =0;
    PNODE temp = *Head;
    PNODE Targetednode = NULL;

    if((iPos < 1)||(iPos > Size))
    {
        printf("Invalid Position");
        return;
    }   
    if(iPos ==1)
    {
        DeleteFirst(Head);

    }
    else if(iPos == Size)
    {
        DeleteLast(Head);
    }
    else 
    {
        for(i = 1 ; i <iPos - 1 ; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev); //#
        temp->next->prev = temp; // #

       
    }
}

int main()

{
    PNODE First = NULL;
    int iRet = 0;
    InsertFirst(&First ,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    Display(First);

    iRet = Count(First);
    printf("Elements in linked list are : %d\n",iRet);

    InsertLast(&First,101);
    InsertLast(&First,111);
    InsertLast(&First,121);

    Display(First);

    iRet = Count(First);
    printf("Elements in linked list are : %d\n",iRet);

    InsertAtPos(&First , 105 ,5);
    Display(First);

    iRet = Count(First);
    printf("Elements in linked list are : %d\n",iRet);

    DeleteAtPos(&First,3);

    Display(First);

    iRet = Count(First);
    printf("Elements in linked list are : %d\n",iRet);




    DeleteFirst(&First);
    Display(First);
    iRet = Count(First);
    printf("Elements in linked list are : %d\n",iRet);
    return 0;

    DeleteLast(&First);
    Display(First);

    iRet = Count(First);
    printf("Elements in linked list are : %d\n",iRet);

   
    return 0;


}