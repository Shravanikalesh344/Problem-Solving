//Display Addtion of Even Number

#include<stdio.h>
#include<stdlib.h>

int EvenAddition(int Arr[],int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    printf("Elements of the array are :\n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
       if((Arr[iCnt] % 2)== 0)
       {
            iSum = iSum + Arr[iCnt];
       }
    }
    return iSum;
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

    iRet = EvenAddition(ptr , iCount);

    printf("Addition of Even Number is %d\n",iRet);
    free(ptr); //ptr(100);

    printf("Dyanamic Memory gets deallocated Successfully");

    return 0;
}

