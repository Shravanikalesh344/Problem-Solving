#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int eSum = 0;
    int oSum = 0;
    int Diff = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit %2)==0)
        {
            eSum = eSum + iDigit;
        }
        else
        {
            oSum = oSum + iDigit; 
        }
        iNo = iNo / 10;
    }
    Diff = eSum - oSum;
    return Diff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("Difference is %d\n",iRet);
    
    return 0;
}