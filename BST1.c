#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE , *PNODE , **PPNODE;

void Insert(PPNODE Head , int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Head == NULL) //BST is empty
    {
        *Head = newn;
    }
    else    //BST contain at least one node
    {
        while(1)    //Unconditional Loop
        {
            if(No == temp->data)
            {
                printf("Unable to insert as node is already present\n");
                free(newn);
                break;
            }
            else if(No > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if(No < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }

                temp = temp->lchild;
            }
        }
    }
}

void Inorder(PNODE Head)
{
    if(Head != NULL)
    {
        Inorder(Head->lchild);
        printf("%d\n",Head->data);
        Inorder(Head->rchild);
    }
}

void Preorder(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\n",Head->data);
        Preorder(Head->lchild);
        Preorder(Head->rchild);
    }
}

void Postorder(PNODE Head)
{
    if(Head != NULL)
    {
        Postorder(Head->lchild);
        Postorder(Head->rchild);
        printf("%d\n",Head->data);
    }
}

bool Search(PNODE Head , int No)
{
    bool flag = false;
    if(Head == NULL)
    {
        printf("BST is empty!!!");
        return false;
    }
    while(Head != NULL)
    {
        if(No == Head->data)
        {
            flag = true;
            break;
        }
        else if(No > Head->data)
        {
            
            Head = Head->rchild;
        }
        else if(No < Head->data)
        {
            Head = Head->lchild;
        }
    }
    return flag;
}


int main()
{
    PNODE First = NULL;
    bool bRet = false;

    Insert(&First,21);
    Insert(&First,11);
    Insert(&First,51);
    //Insert(&First,21);
    //Insert(&First,21);

    printf("Inorder Traversal is : %d\n");
    Inorder(First);

    printf("Preorder Traversal is : %d\n");
    Preorder(First);

    printf("Postorder Traversal is : %d\n");
    Postorder(First);

    bRet = Search(First , 51);

    if(bRet == true)
    {
        printf("Element Found ...\n");
    }
    else
    {
        printf("Element not Found...\n");
    }
    
    return 0;

}