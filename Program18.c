#include<stdio.h>

int Minimum(int iNum1 , int iNum2)
{
    int iAns = 0;

    if(iNum1 < iNum2)
    {
        return  iNum1;
    }
    else 
    {
        return iNum2;
    }
}

int main()
{

    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter first number..\n");
    scanf("%d",&iValue1);

    printf("Enter second number..\n");
    scanf("%d",&iValue2);

    iRet = Minimum(iValue1,iValue2);

    printf("Smallest Number is : %d\n",iRet);

    return 0;
}