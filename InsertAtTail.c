#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE , *PNODE , **PPNODE;

void InsertLast(PPNODE Head , int No)
{
   
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next = newn;
    
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

int main()
{
    PNODE First = NULL;

    InsertLast(&First,101);
    InsertLast(&First,102);
    InsertLast(&First,103);
    InsertLast(&First,104);
    InsertLast(&First,105);

   Display(First);
    //Display(First);
}
