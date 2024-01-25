//Stack

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Push(PPNODE Head , int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

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

int Pop(PPNODE Head)
{
    PNODE temp = *Head;
    int Value = 0;
    if(*Head == NULL)
    {
        printf("Stack is empty..\n");
        return Value;
    }
    else
    {
        Value = (*Head)->data;
        *Head = (*Head)->next;
        free(temp);
        
    }
    return Value;
}

void Display(PNODE Head)
{
    printf("Elements of stack are :\n");

    while(Head != NULL)
    {
        printf("| %d | \n",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int main()

{
    PNODE First = NULL;
    int iRet = 0;

    Push(&First,101);
    Push(&First,51);
    Push(&First,21);
    Push(&First,11);

    Display(First);

    iRet = Pop(&First);

    printf("Poped element is : %d\n",iRet);

    
    iRet = Pop(&First);

    printf("Poped element is : %d\n",iRet);

    
    iRet = Pop(&First);

    printf("Poped element is : %d\n",iRet);

     iRet = Pop(&First);

    printf("Poped element is : %d\n",iRet);


    iRet = Pop(&First);

    printf("Poped element is : %d\n",iRet);

    

    return 0;
}