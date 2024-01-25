//Queue

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



void Enqueue(PPNODE Head , int No)
{
    PNODE temp = *Head;
    PNODE newn =(PNODE)malloc(sizeof(NODE));

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
            temp = temp->next;
        }
        temp->next = newn;

    }
}

int Dequeue(PNODE Head)
{
    PNODE temp = Head;
    int Value = 0;
    if(Head == NULL)
    {
        printf("Queue is empty..\n");
        return Value;
    }
    else
    {
        Value = Head->data;
        Head = Head->next;
        free(temp);
        
    }
    return Value;
}

void Display(PNODE Head)
{
    printf("Elements of queue are :\n");

    while(Head != NULL)
    {
        printf("| %d | \t",Head->data);
        Head = Head->next;
    }
    printf("\n");
}

int main()

{
    PNODE First = NULL;
    int iRet = 0;

    Enqueue(&First,101);
    Enqueue(&First,51);
    Enqueue(&First,21);
    Enqueue(&First,11);
  
    Display(First);

    iRet = Dequeue(First);
    printf("Removed elements from queue are : %d\n",iRet);
    
     iRet = Dequeue(First);
    printf("Removed elements from queue are : %d\n",iRet);
    
     iRet = Dequeue(First);
    printf("Removed elements from queue are : %d\n",iRet);

    iRet = Dequeue(First);
    printf("Removed elements from queue are : %d\n",iRet);
    
    

    
    

    

    return 0;
}