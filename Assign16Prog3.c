#include<stdio.h>
#include<stdlib.h>



int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];
    int iDifference = 0;


    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        else 
        {
            iMin = Arr[iCnt];
        }
    }

    iDifference = iMax - iMin;
    return iDifference;

   
}


int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iValue = 0 , iCnt = 0 , iRet = 0;
   

    printf("Enter Number of elements :\n");
    scanf("%d",&iSize);

   

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable To Allocate Memory !\n");
        return -1;
    }
    printf("Enter %d Elements :\n",iSize);

    for(iCnt = 0 ;iCnt < iSize ; iCnt++)
    {
        printf("Enter %d Element :\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr ,iSize);

    printf("%d\n",iRet);
 
    return 0;

    free(ptr);
}