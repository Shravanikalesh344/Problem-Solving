#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct node *next;
}

typedef struct Node  NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head , int No)
{
    //Step 1 : Allocate memory for node 
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    //Step 2 : Initialize the node 
    newn->data = No;
    newn->next = NULL;

    //Step 3 : Check Whether Linked list is empty or not
    if(*Head == NULL)   // LL is empty
    {
        *Head = newn;
    }
    else        //LL contains at least 1 node in it 
    {
        newn -> next = *Head;
        *Head = newn;
    }
}



void Display(PNODE Head)
{
    while(*Head != NULL)
    {
        printf("|%d|->",Head->data);
        Head = Head -> next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;
     while(*Head != NULL)
    {
        Head = Head -> next;
        iCnt++;
    }
   return iCnt; 
}

void InsertLast(PPNODE Head , int No)
{
    PNODE newn = (PNODE) malloc(sizeof(NODE));

    newn->data = No;
    newn->next=NULL;

    if(*Head == NULL) //LL is empty
    {   
        *Head = newn;
    }
    else 
    {
        //Temporary pointr for LL traversal
        PNODE temp = *Head;

        //Travel the LL till last node
        while(temp -> next != NULL)
        {
            Temp = Temp->next;

        }
        //Add the address of new node at the end of last node
        Temp->next = newn;
    }
}

void DeletetLast(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head == NULL)   //Case 1
    {
        return;
    }
    else if((*Head)-> next == NULL) // Case 2
    {
        free(*Head);
        *Head = NULL;
    }
    else    // Case 3
    {
        while(Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        free(Temp->next);
        Temp->next = NULL;
    }
}

void DeleteFirst(PPNODE Head)
{
     PNODE Temp = *Head;
    if(*Head == NULL)   //Case 1
    {
        return;
    }
    else if((*Head)-> next == NULL) // Case 2
    {
        free(*Head);
        *Head = NULL;
    }
    else    // Case 3
    {
       
        *Head = (*Head)->next;
         free(Temp);   
    }
}

void InsertAtPos(PPNODE Head , int No , int iPos)
{
    int Size = Count(*Head);
    PNODE newn = NULL;
    PNODE Temp = *Head;
    int i = 0;

    //Case 1 : INVALID position (Example 11 / -2 / 8)

    if((iPos < 1)||(iPos > Size+1))
    {
        printf("Invalid Position\n");
        return;
    }
    //Case 2 : First Positiion (Ex : 1)
    if(iPos == 1)
    {
        InsertFirst(Head , No);
    }
    //Case 3 : Last Position   (Ex : 7)
    else if(iPos == Size+1)
    {   
        InsertLast(Head, No);
    }
    //Case 4 : Position is in between First and Last  (Ex :5)
    else 
    {
       newn = (PNODE)malloc(sizeof(NODE));
       newn->data = No;
       newn->next = NULL;

       for(i = 1 ; i< iPos - 1 ; i++)
       {
        temp = temp->next;
       }

       newn->next = temp->next;
       temp->next = newn;

 }
}

void DeleteAtPos(PPNODE Head ,int iPos)
{
    int Size = Count(*Head);
    PNODE temp = *Head;
    int i = 0;
    PNODE targetednode = NULL;

    //Case 1 : INVALID position (Example 11 / -2 / 8)

    if((iPos < 1)||(iPos > Size))
    {
        printf("Invalid Position\n");
        return;
    }
    //Case 2 : First Positiion (Ex : 1)
    if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    //Case 3 : Last Position   (Ex : 6)
    else if(iPos == Size)
    {   
        DeletetLast(Head);
    }
    //Case 4 : Position is in between First and Last  (Ex :5)
    else 
    {
        for(i= 1 ; i < iPos - 1 ; i++)
        {
            temp = temp->next;
        }
        targetednode = temp->next;
        temp->next = temp->next->next //targeted->Next
        free(targetednode);

    }   
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    void InsertFirst(&First , 111);
    void InsertFirst(&First , 101);
    void InsertFirst(&First , 51);
    void InsertFirst(&First , 21);
    void InsertFirst(&First , 11);

    void Display(First);

    iRet = Count(First);

    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&First,121);
    InsertLast(&First,151);
    void Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);
   
    DeleteFirst(&First);
    void Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    DeletetLast(&First);
    void Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);


    InsertAtPos(&First, 105 ,5);

    DeleteAtPos(&First , 5);


    return 0;
}