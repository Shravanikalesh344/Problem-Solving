//Reverse Number

#include<stdio.h>

int RevNumber(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo != 0)
    {
    iDigit = iNo % 10;
    iNo = iNo / 10;
    iRev = (iRev * 10)+ iDigit;
    }
    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = RevNumber(iValue);

    printf("Reverse Number %d :\n",iRet);
    return 0;
}