#include<stdio.h>

int SumDigits(int iNo)
{
    
    int iSum = 0;
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit;
        
    }  
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Number of digitts are : %d",iRet);

    return 0;
}