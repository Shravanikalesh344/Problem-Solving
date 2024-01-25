#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt =  0;
    int iTableRev = 0;

    for(iCnt = 10 ; iCnt >=1 ; iCnt--)
    {
        iTableRev = iNo * iCnt;
        printf("%d\t",iTableRev);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}