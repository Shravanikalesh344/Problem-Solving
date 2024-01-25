//Frequency of specific number

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize,int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;
  
  for(iCnt = 0 ;iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }    
    }
    
    return iFrequency;
}
int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
    int iValue = 0;
    

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

    printf("Enter Number to find Frequency :\n");
    scanf("%d",&iValue);

    iRet = Frequency(ptr , iCount,iValue);

    printf("%d Occurs %d Times \n",iValue,iRet);
    

    free(ptr); //ptr(100);

    printf("Dyanamic Memory gets deallocated Successfully");

    return 0;
}

