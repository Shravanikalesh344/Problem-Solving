#include<stdio.h>

int KMtoMeter(int iNo)
{
    int retMeter = 0;

    retMeter = 1000 * iNo;

    return retMeter;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter distance : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance into meter is : %d",iRet);

    return 0;
}