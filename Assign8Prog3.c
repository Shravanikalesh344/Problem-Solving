#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int fact = 1;

    if(iNo < 1)
    {
        iNo = -iNo;     // Modifier
    }
    for(iCnt = 1 ; iCnt<=iNo  ; iCnt++) //5
    {
        if((iCnt % 2)== 0)
        {
            fact = fact * iCnt;
        }
    }
    return fact;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;   
}

//Time Complexity : O(n)