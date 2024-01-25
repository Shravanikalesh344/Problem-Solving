#include<stdio.h>
# define DOLLAR 70

int DollarToINR(int iNo)
{
    int iDollar = 0;

    iDollar = iNo * DOLLAR;

    return iDollar;       
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter NUmber in USD:\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("%d\n",iRet);

    return 0;
}
