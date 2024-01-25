#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo ; iCnt <= (iNo * 5); iCnt++)
    {
        if((iCnt % iNo)== 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}


//Time Complexity : O(n^5);