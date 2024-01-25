#include<stdio.h>

int  Factor(int iValue)
{
    static int iCnt = 1;
    static  int iSum = 0;

    if(iCnt <= (iValue/2))
    {
        if((iValue % iCnt)==0)
        {
            iSum = iSum + iCnt;    
        }
        iCnt++;
       
        Factor(iValue);
    }
    return iSum;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a number :\n");
    scanf("%d",&iNo);

    iRet = Factor(iNo);
    printf("Sum is : %d\n",iRet);

    return 0;
}