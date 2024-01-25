#include<stdio.h>
#include<stdlib.h>

int AdditionElements(int Arr1[],int Count)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0 ; iCnt < Count ; iCnt++)
    {
        iSum = iSum + Arr1[iCnt];
    }
    return iSum;
}

int main()
{
    
    int  iSize = 0;
    int iRet = 0;
    int *Arr = NULL;

    printf("How many elements do you want ?\n");
    scanf("%d",&iSize);

     Arr = (int*)malloc(iSize * sizeof(int));

    int iCnt = 0;

      printf("Enter the elements in the array :");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
      
        scanf("%d",&Arr[iCnt]);
    }

    iRet = AdditionElements(Arr,iSize);
    printf("Elements of array elements are : %d\n",iRet);

    return 0;
}