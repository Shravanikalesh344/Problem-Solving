#include<stdio.h>

float  Average(int iNum1 , int iNum2, int iNum3)
{
    float fAns = 0.0f;

    fAns =  ((float)(iNum1 + iNum2 + iNum3) / 3);
   // fAns =  (iNum1 +iNum2 +iNum3) / 3;

    return fAns;

}

int main()
{

    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    float fRet = 0;

    printf("Enter first number..\n");
    scanf("%d",&iValue1);

    printf("Enter second number..\n");
    scanf("%d",&iValue2);

     printf("Enter Third number..\n");
    scanf("%d",&iValue2);

    fRet = Average(iValue1,iValue2,iValue3);

    printf("Average  is : %f\n",fRet);

    return 0;
}