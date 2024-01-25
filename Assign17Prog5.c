#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iEven = 0;
   
    while(iNo != iCnt)
    {
        iEven = iEven + 2;
        printf("%d\t",iEven);
        iCnt++;
    }
    }


int main()
{
    int iValue = 0;

    printf("Enter Numbers of Elements :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}