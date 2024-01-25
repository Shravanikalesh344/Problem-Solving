#include<stdio.h>

double SquareMeter(int iNo)
{
    double dAns = 0.0;

    dAns = 0.0929 * iNo ;

    return dAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in square Feet :\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is : %f\n",dRet);

    return 0;
}