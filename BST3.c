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

int Count(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        iCnt++;
        Count(Head->lchild);
        Count(Head->rchild);
    } 
    return iCnt;
}

int CountLeaf(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        if((Head->lchild  == NULL) && (Head->rchild == NULL))
        {
             iCnt++;
        }
        CountLeaf(Head->lchild);
        CountLeaf(Head->rchild);
    } 
    return iCnt;
}

int CountParent(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        if((Head->lchild  != NULL) || (Head->rchild != NULL))
        {
             iCnt++;
        }
        CountParent(Head->lchild);
        CountParent(Head->rchild);
    } 
    return iCnt;
}

int Summation(PNODE Head)
{
    static int iSum = 0;

    if(Head != NULL)
    {
        iSum = iSum + Head->data;
        Summation(Head->lchild);
        Summation(Head->rchild);
    }
    return iSum;
}

int Even(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        if((Head->data % 2)==0)
        {
            iCnt++;
        }
        Even(Head->lchild);
        Even(Head->rchild);
    }
    return iCnt;
}

int CountOdd(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        if((Head->data % 2)!=0)
        {
            iCnt++;
        }
        Even(Head->lchild);
        Even(Head->rchild);
    }
    return iCnt;
}
int main()
{
    PNODE First = NULL;
    bool bRet = false;
    int iValue = 0;
    int iRet = 0;
    int iLeaf = 0;
    int iParent = 0;
    int iSumR = 0;
    int iEvn = 0;
    int iOdd = 0;

    Insert(&First,21);
    Insert(&First,11);
    Insert(&First,17);
    Insert(&First,45);
    Insert(&First,10);
    Insert(&First,78);
    Insert(&First,30);
    Insert(&First,5);
    Insert(&First,11);
     
    Inorder(First);
    

    printf("Enter the Value to Search :\n");
    scanf("%d",&iValue);

    bRet = Search(First , iValue);

    if(bRet == true)
    {
        printf("Element Found ...\n");
    }
    else
    {
        printf("Element not Found...\n");
    }
    

    iRet = Count(First);
    printf("Numbr of Elements in the BST Are : %d\n",iRet);

    iLeaf = CountLeaf(First);
    printf("Number of elements in Leaf node are : %d\n",iLeaf);

    iParent = CountParent(First);
    printf("Number/ of elements in Parent node are : %d\n",iParent);

    iSumR = Summation(First);
    printf("Summation is : %d\n",iSumR);
   

    iEvn = Even(First);
    printf("Number of Even Elements are : %d\n",iEvn);

    iOdd = CountOdd(First);
    printf("Number of Even Elements are : %d\n",iEvn);
    return 0;
}