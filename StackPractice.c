#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void insertFirst(PPNODE head , int no)
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
        *head= newn;
    }
}

void Display(PNODE head)
{
    printf("Elements in the Stack Are :\n");

    while(head != null)
    {
        printf("%d\n",head->data);
        head = head->next;
    }
}


int main()
{
    PNODE first = NULL;

    insertFirst(&first,111);
    insertFirst(&first,101);
    insertFirst(&first,51);
    insertFirst(&first,21);
    insertFirst(&first,11);

    Display(first);




    return 0;
}