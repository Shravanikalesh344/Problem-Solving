#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)         // Modifier
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf( "$ \t * " , iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter NUmber : \n");
    scanf("%d",&iValue);

    Pattern(iValue);
}

//Time Complexity : O(n);