//Array

#include<stdio.h>   //For printf and scanf
#include<stdlib.h>  //For malloc and 

int main()
{

    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the number of elements :\n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");

    for(iCnt = 0;iCnt < iCount;iCnt++)
    {
    scanf("%d",&ptr[iCnt]);
    }

    printf("Your Entered Elements are :\n");
    for(iCnt = 0;iCnt < iCount ; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
    printf("\n");

    return 0;
}