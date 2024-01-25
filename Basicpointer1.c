#include<stdio.h>

int main()
{

    int a = 20;
    int *ip = &a;


    printf("Value of a is %d\n",*(ip));

    return 0;
}