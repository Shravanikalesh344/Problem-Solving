#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE , *PNODE , **PPNODE;

class BST
{
    public:
   // BST();
    void Insert(PPNODE head,int no);
    void Inorder(PNODE head);
    void Preorder(PNODE head);
    void Postorder(PNODE head);
    bool search(PNODE head,int no);
    int Summation(PNODE head);
};

void BST :: Insert(PPNODE head,int no)
{
    PNODE newn = NULL;
    PNODE temp = *head;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        while(1)
        {
            if(no == temp->data)
            {
                cout<<"Duplicate Entry Is Not Allowed In BST"<<"\n";
                break;
            }
            else if(no > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild= newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if(no < temp->data)
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

void BST ::  Inorder(PNODE head)
{
   
    if(head != NULL)
    {
        Inorder(head->lchild);
        cout<<head->data<<"\n";
        Inorder(head->rchild);
    }
}

void BST :: Preorder(PNODE head)
{
   
    if(head != NULL)
    {
        cout<<head->data<<"\n";
        Preorder(head->lchild);
        Preorder(head->rchild);
    }
}

void BST :: Postorder(PNODE head)
{
   
    if(head != NULL)
    {
        Postorder(head->lchild);
        Postorder(head->rchild);
        cout<<head->data<<"\n";
    }
}

bool BST :: search(PNODE head,int no)
{
    bool flag = false;

    if(head == NULL)
    {
        cout<<"BST is empty !!";
        return false;
    }
    while(head != NULL)
    {
        if(head->data == no)
        {
            flag = true;
            break;
        }
        else if(no > head->data)
        {
            head = head->rchild;
        }
        else if(no < head->data)
        {
            head = head->lchild;
        }
    }
    return flag;
}

int BST :: Summation(PNODE head)
{
    static int iSum = 0;
   
        while(head != NULL)
        {
            iSum = iSum + head->data;
            Summation(head->lchild);
            Summation(head->rchild);   
        }
    
    return iSum;
}
int main()
{
    BST bobj;
    PNODE First = NULL;
    int iRet = 0;
    int iValue = 0;

    bobj.Insert(&First,21);
    bobj.Insert(&First,11);
    bobj.Insert(&First,51);
    bobj.Insert(&First,78);
    bobj.Insert(&First,10);
    bobj.Insert(&First,45);
    bobj.Insert(&First,5);

    cout<<"Inorder Traversal"<<"\n";
    bobj.Inorder(First);

    cout<<"Preorder Traversal"<<"\n";
    bobj.Preorder(First);

    cout<<"Postorder Traversal"<<"\n";
    bobj.Postorder(First);

    iRet = bobj.Summation(First);
    cout<<"Summation of Elements in BST are :"<<iRet<<"\n";
   
  return 0;  
}


   