//Maximum  number from array

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for(iCnt = 0 ;iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements that yo want to enter ?\n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dyanamic Memory gets eallocated Successfully for %d elements \n",iCount);
    printf("Enter the %d elements :\n",iCount);

    
    for(iCnt = 0; iCnt < iCount ; iCnt++)
    {
        printf("Enter Elements no %d :\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Minimum(ptr , iCount);
    printf("Minimum Element is %d\n",iRet);

    free(ptr); //ptr(100);

    printf("Dyanamic Memory gets deallocated Successfully");

    return 0;
}

