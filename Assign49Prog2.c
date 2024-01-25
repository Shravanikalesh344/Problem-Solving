#include<stdio.h>

int Display(int iNo)
{
     int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo /10;
        Display(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the value :\n");
    scanf("%d",&iValue);

    iRet = Display(iValue);
    printf("Summation of Digit is :%d\n",iRet);

    return 0;
}