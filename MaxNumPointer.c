#include<stdio.h>

int main()
{

    int num1;
    int num2;

    printf("Enter number 1\n");
    scanf("%d\n",&num1);

    printf("Enter number 2\n");
    scanf("%d\n",&num2);

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    if(*ptr1 > *ptr2)
    {
        printf("Number is %d is maxiumn\n",*(ptr1));
    }
    else 
    {
        printf("Number %d is maximun\n",*(ptr2));
    }

    return 0;
}