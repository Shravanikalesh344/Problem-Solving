#include<stdio.h>

int DisplayR(int Arr[], int iSize)
{
     static int iCnt = 0;
     static int iSum = 0;

    if(iCnt < iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
        DisplayR(Arr,iSize);
    }
    return iSum;
}

int main()
{
    int Arr[5] ={10,20,30,40,50};
    int iRet = 0;


    iRet = DisplayR(Arr,5);
    printf("Sum of Array is %d\n",iRet);
  
    return 0;
}