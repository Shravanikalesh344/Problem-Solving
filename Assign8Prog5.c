#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int EvenFact = 1;
    int OddFact = 1;
    int FactDiff = 0;

    if(iNo < 1)
    {
        iNo = - iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2)== 0)
        {
            EvenFact = EvenFact * iCnt;
        }
        else
        {
            OddFact = OddFact * iCnt;
        }
    }
    FactDiff = EvenFact - OddFact;
    return FactDiff;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter a number \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference between factorial is %d",iRet);

    return 0;
}

//Time Complexity : O(n);