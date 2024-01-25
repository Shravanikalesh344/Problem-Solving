#include<stdio.h>

int EvenCountR(int Arr[], int iSize)
{
      static int iCnt = 0;
      static int iCount = 0;

    if(iCnt < iSize)
    {
        if((Arr[iCnt]%2)==0)
        {
            iCount++;
        }
        iCnt++;
        EvenCountR(Arr,iSize);
    }
    return iCount;
}

int main()
{
    int Arr[5] ={10,20,30,40,70};
    int iRet = 0;


    iRet = EvenCountR(Arr,5);
    printf("Even Count is %d\n",iRet);
  
    return 0;
}