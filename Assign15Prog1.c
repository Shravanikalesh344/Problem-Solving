#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength , int iNo)
{
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
        else 
        {
            return FALSE;
        }
    }
}


int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iValue = 0 , iCnt = 0;
    BOOL bRet = FALSE;

    printf("Enter Number of elements :\n");
    scanf("%d",&iSize);

    printf("Enter the number :\n");
    scanf("%d",&iValue);

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

    bRet = Check(ptr , iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number is persent .\n");
    }
    else 
    {
        printf("Number is not present . \n");
    }

    return 0;

    free(ptr);
}