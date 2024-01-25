#include<stdio.h>

int SumDigitsR(int iValue)
{
   // static int iCnt = 1;
    //static  int iSum = 0;
    int idigit = 0;
    static int iSum = 0;

    while(iValue != 0)
    {
        idigit = iValue % 10;
        iSum = iSum + idigit;
        iValue = iValue / 10;
        SumDigitsR(iValue);
    }
    return iSum;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a number :\n");
    scanf("%d",&iNo);

    iRet= SumDigitsR(iNo);
    printf("Sum of Digit is : %d\n",iRet);
  
    return 0;
}