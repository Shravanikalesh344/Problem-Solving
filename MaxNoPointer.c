#include<stdio.h>

int main()
{

    int no1 = 0 ;
    int no2 = 0;

    int *np1 = &no1;
    int *np2 = &no2;

    printf("Enter no1 :\n");
    scanf("%d\n",&no1);

    printf("Enter no2 :\n");
    scanf("%d\n",&no2);

    if(*np1 > *np2)
    {
        printf("Number 1 is greater %d\n",*(np1));
    }
    else
    {
        printf("Number 2 is greater %d\n",*(np2));
    }



    return 0 ;
}