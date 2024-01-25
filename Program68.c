//Maximum  number from array

#include<stdio.h>
#include<stdlib.h>

void MaxMin(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];
    int iMax = Arr[0];

    for(iCnt = 0 ;iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax= Arr[iCnt];
            //printf("Mximum Element is %d :\n",iMax);
        }
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    printf("Maximum Element is %d :\n",iMax);
    printf("Minimum element is %d :\n",iMin);
   
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    

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

    MaxMin(ptr , iCount);
    

    free(ptr); //ptr(100);

    printf("Dyanamic Memory gets deallocated Successfully");

    return 0;
}

