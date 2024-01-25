#include<stdio.h>

int Sum5Digit(int iNo)
{
    if((iNo < 10000)||(iNo > 99999))
    {
        printf("Invalid Numer\n");
        return iNo;
    }
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}

int main()
{

     int iValue = 0;
     int iRet = 0;

    printf("Enter a five digit number:\n");
    scanf("%d",&iValue);
  
    iRet = Sum5Digit(iValue);
    printf("Addition of given five digit number is %d",iRet);

    return 0;
}