#include<stdio.h>

int DiffFactNonFact(int iNo)
{
    int iCnt =0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDiff = 0;


    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt)== 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;   
        }
        iDiff = iSumFact - iSumNonFact;
    }
    return iDiff;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = DiffFactNonFact(iValue);

    printf("%d",iRet);


    return 0;
}