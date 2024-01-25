#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertFirst(PPNODE Head ,PPNODE Tail, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->prev = NULL;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else 
    {
       
        newn->next = *Head;
        (*Head)->prev = newn;
        *Head = newn;

    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void InsertLast(PPNODE Head ,PPNODE Tail, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->prev = NULL;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        (*Tail)->next = newn;
         newn->prev = *Tail;
        *Tail = newn;
    }
     (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void Display(PNODE Head,PNODE Tail)
{
   if(Head != NULL && Tail!= NULL)
   {
        do
        {
            printf("|%d| <=> ",Head->Data);
            Head = Head->next;
        }while(Head != Tail->next);
   }
   printf("\n");

    
}

int  Count(PNODE Head,PNODE Tail)
{
    int iCnt = 0;

    if(Head != NULL && Tail!= NULL)
    {
        do
        {
            iCnt++;
            Head = Head->next;
        }while(Head != Tail->next);
    }
    return iCnt;
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL)&& (*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else 
    {
        *Head = (*Head)->next;
        free((*Tail)->next);
        (*Tail)->next = *Head;
        (*Head)->prev = *Tail;
       

    }
   

}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
    
    if((*Head == NULL)&& (*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else 
    {
        *Tail = (*Tail)->prev;
        free((*Tail)->next); 
        (*Tail)->next = *Head;
        (*Head)->prev = *Tail;
    }
}

void InsertAtPos(PPNODE Head ,PPNODE Tail, int No , int iPos)
{
    int Size = Count(*Head,*Tail);
    int iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = *Head;

    if((iPos < 1)&&(iPos > Size+1))
    {
        printf("Invalid Position");
    }
    else if(iPos ==1)
    {
        InsertFirst(Head,Tail,No);
    }
    else if(iPos == Size+1)
    {
        InsertLast(Head , Tail , No);
    }
    else 
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->Data = No;
        newn->prev = NULL;
        newn->next = NULL;

        for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
        {
            temp = temp->next;
        }
       
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
       
  }
}

void DeleteAtPos(PPNODE Head , PPNODE Tail,int iPos)
{
     int Size = Count(*Head,*Tail);
    int iCnt = 0;
    PNODE temp = *Head;
    PNODE TargetedNode = NULL;

    if((iPos < 1)&&(iPos > Size))
    {
        printf("Invalid Position");
    }
    else if(iPos ==1)
    {
       DeleteFirst(Head,Tail);
    }
    else if(iPos == Size)
    {
        DeleteLast(Head,Tail);
    }
    else 
    {
        for(iCnt = 1 ; iCnt < iPos-1 ; iCnt++)
        {
            temp = temp->next;
        }
        temp->next= temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }

}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    int iRet = 0;

    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);

    InsertLast(&First,&Last,101);
    InsertLast(&First,&Last,111);
    InsertLast(&First,&Last,121);

    Display(First , Last);

    iRet = Count(First , Last);
    printf("Number of elements in linked list are : %d\n",iRet);

    DeleteFirst(&First , &Last);
    Display(First , Last);

    iRet = Count(First , Last);
    printf("Number of elements in linked list are : %d\n",iRet);

    DeleteLast(&First , &Last);
    Display(First , Last);

    iRet = Count(First , Last);
    printf("Number of elements in linked list are : %d\n",iRet);

    InsertAtPos(&First , &Last ,105, 3);
    Display(First , Last);

    iRet = Count(First , Last);
    printf("Number of elements in linked list are : %d\n",iRet);

    DeleteAtPos(&First , &Last ,3);
    Display(First , Last);

    iRet = Count(First , Last);
    printf("Number of elements in linked list are : %d\n",iRet);



    return 0;
}