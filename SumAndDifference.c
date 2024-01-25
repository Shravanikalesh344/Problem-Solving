#include<stdio.h>

int Sum(int iValue1 , int iValue2)
{
    int iSum = 0;
    iSum = iValue1 + iValue2;
    return iSum;
}
int Difference(int iValue1 , int iValue2)
{
    int iDiff = 0;
    iDiff = iValue1 - iValue2;
    return iDiff;
}
float fSum(float fValue1 , float fValue2)
{
    float fSum = 0.0f;
    fSum = fValue1 + fValue2;
    return fSum;
}
float fDifference(float fValue1 , float  fValue2)
{
    float fDiff = 0.0f;
    fDiff = fValue1 - fValue2;
    return fDiff;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;

    int iNo1 = 0;
    int iNo2 = 0;

    float fNo1 = 0.0f;
    float fNo2 = 0.0f;
    printf("Enter No1 For Integer :\n");
    scanf("%d\n",&iNo1);

    printf("Enter No2 for Integer :\n");
    scanf("%d\n",&iNo2);

    printf("Enter No1 For float :\n");
    scanf("%f\n",&fNo1);

    printf("Enter No2 for float :\n");
    scanf("%f\n",&fNo2);

    iRet = Sum(iNo1, iNo2);
    printf("Sum is : %d\n",iRet);

    iRet = Difference(iNo1,iNo2);
    printf("Diffference is : %d\n",iRet);

    fRet = fSum(fNo1,fNo2);
    printf("Sum is : %f\n",fRet);

    fRet = fDifference(fNo1,fNo2);
    printf("Difference is : %f\n",fRet);

    return 0;
}