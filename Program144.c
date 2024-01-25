#include<stdio.h>
#include<stdlib.h>

//Structure Declration
struct node
{
    int Data;           //4 bytes
    struct node *next;  //8 bytes
};

int main()
{
    struct node *First = NULL;
    return 0;
}