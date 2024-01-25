#include<stdio.h>

int Mult(int iNo)
{
    static int iProd = 1;
    int iDigit = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iProd = iProd * iDigit;
        iNo = iNo / 10;
        Mult(iNo);
    }
    return iProd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number :\n");
    scanf("%d",&iValue);

    iRet = Mult(iValue);
    printf("Product of Digit is : %d\n",iRet);

    return 0;
}