#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int fact = 1;

    if(iNo < 1) // Modifier
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2)!= 0)
        {
            fact = fact * iCnt;
        }
    }
    
    return fact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial of numbers are : %d",iRet);

    return 0;
}


// Time Complexity : O(n);