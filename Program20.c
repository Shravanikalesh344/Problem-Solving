#include<stdio.h>

int Maximum(int iNum1 , int iNum2, int iNum3)
{
   
    if((iNum1 >= iNum2) && (iNum1 >= iNum3))
    {
        return iNum1;
    }
    else if((iNum2 >= iNum1) && (iNum2 >= iNum3))
    {
        return iNum2;
    }
    else
    {
        return iNum3;
    }

}

int main()
{

    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int  iRet = 0;

    printf("Enter first number..\n");
    scanf("%d",&iValue1);

    printf("Enter second number..\n");
    scanf("%d",&iValue2);

     printf("Enter Third number..\n");
    scanf("%d",&iValue3);

    iRet = Maximum(iValue1,iValue2,iValue3);

    printf("Largest Number  is : %d\n",iRet);

    return 0;
}