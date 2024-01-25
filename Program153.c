//Circular  linear linkedlist
#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;
}NODE , *PNODE , **PPNODE;


void InsertFirst(PPNODE Head , PPNODE Tail , int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*Head == NULL)&&(*Tail == NULL)) //LL is empty
    {
        *Head = newn;
        *Tail = newn;   //#
        //(*Tail)->next = *Head; 
    }
    else    //LL contains at least one node 
    {
       newn->next = *Head; 
       *Head = newn;
       //(*Tail)->next = *Head;
    }
    (*Tail)->next = *Head;  //#
}

void InsertLast(PPNODE Head , PPNODE Tail , int No)
{
     PNODE newn = (PNODE)malloc(sizeof(NODE));
    

    newn->data = No;
    newn->next = NULL;

    if((*Head == NULL)&&(*Tail == NULL)) //LL is empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        (*Tail)->next = newn;
        *Tail = newn;
        
    }
    (*Tail)->next = *Head; 
}

void Display(PNODE Head ,  PNODE Tail)
{
    printf("Elements of Linked list are :\n");

    if((Head != NULL) &&(Tail != NULL))
    {
        do 
        {
            printf("| %d | -> ",Head->data);
            Head= Head->next;
        }while(Head != Tail->next);

        printf("Address of First Node \n");
    }
}

int Count(PNODE Head , PNODE Tail)
{
    int iCnt = 0;
     if((Head != NULL) &&(Tail != NULL))
    {
        do 
        {
            iCnt++;
            Head= Head->next;
        }while(Head != Tail->next);
    }
     return iCnt;
}

void DeleteFirst(PPNODE Head , PPNODE Tail)
{
  
    if((*Head == NULL) && (*Tail == NULL))
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
   }
}

void DeleteLast(PPNODE Head , PPNODE Tail)
{
    PNODE temp = *Head;
    if((*Head == NULL) && (*Tail == NULL))
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
        while(temp->next != *Tail)
        {
            temp = temp->next;
        }
        free(*Tail);  //free(temp->next);
        *Tail = temp;
        (*Tail)->next = *Head;
        
        
    }

}

void InsertAtPos(PPNODE Head , PPNODE Tail,int No , int iPos)
{
    int Size = Count(*Head,*Tail);
    PNODE temp = *Head;
    int i = 0;
    PNODE newn = NULL;

    if((iPos < 1)||(iPos > Size+1))
    {
        printf("Invalid Position \n");
    }   
    else if(iPos == 1)
    {
        InsertFirst(Head ,Tail, No);
    }
    else if(iPos == Size+1)
    {
        InsertLast(Head , Tail ,No);
    }
    else 
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;

        for(i = 1 ;  i< iPos-1 ; i++)
        {
            temp=temp->next;
        }
       newn->next = temp->next;
       temp->next = newn;
 }
}

void DeleteAtPos(PPNODE Head ,PPNODE Tail, int iPos)
{
    int Size = Count(*Head,*Tail);
    PNODE temp = *Head;
    int i = 0;
    PNODE Targetednode = NULL;
   

    if((iPos < 1)||(iPos > Size))
    {
        printf("Invalid Position \n");
    }   
    else if(iPos == 1)
    {
        DeleteFirst(Head ,Tail);
    }
    else if(iPos == Size)
    {
        DeleteLast(Head , Tail);
    }
    else 
    {
        for(i = 1 ;  i< iPos-1 ; i++)
        {
            temp=temp->next;
        }
        Targetednode = temp->next;
        temp->next = temp->next->next;
         free(Targetednode);
    }
}
int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;  //#
    int iRet = 0;

    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);
    Display(First,Last);
    iRet = Count(First , Last);
    printf("Elements in Linkedlist are %d \n",iRet);

    InsertLast(&First,&Last,101);
    InsertLast(&First,&Last,111);
    InsertLast(&First,&Last,121);
     Display(First,Last);
    iRet = Count(First , Last);
    printf("Elements in Linkedlist are %d \n",iRet);

    InsertAtPos(&First,&Last,105,5);
    Display(First,Last);
    iRet = Count(First , Last);
    printf("Elements in Linkedlist are %d \n",iRet);

    DeleteAtPos(&First,&Last,4);
    Display(First,Last);
    iRet = Count(First , Last);
    printf("Elements in Linkedlist are %d \n",iRet);
    


    DeleteFirst(&First,&Last);
    Display(First,Last);
    iRet = Count(First , Last);
    printf("Elements in Linkedlist are %d \n",iRet);

    DeleteLast(&First,&Last);
    Display(First,Last);
    iRet = Count(First , Last);
    printf("Elements in Linkedlist are %d \n",iRet);

    DeleteLast(&First,&Last);
    Display(First,Last);
    iRet = Count(First , Last);
    printf("Elements in Linkedlist are %d \n",iRet);

    return 0;
}