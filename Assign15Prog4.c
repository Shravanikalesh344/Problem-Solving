#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[], int iLength , int iStart , int iEnd)
{
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }   
}


int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iValue1 = 0 ,iValue2 = 0 ,iCnt = 0;


    printf("Enter Number of elements :\n");
    scanf("%d",&iSize);

    printf("Enter Starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter Ending Point :\n");
    scanf("%d",&iValue2);


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

    Range(ptr , iSize,iValue1, iValue2);

      free(ptr);
    return 0;

  
}