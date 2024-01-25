#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iOddProd = 1;
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
           iOddProd = iOddProd * Arr[iCnt];
        }
        else
        {
            iOddProd = 0;
        }
    }   
    return iOddProd;
}


int main()
{
    int iSize = 0 , iRet = 0;
    int *ptr = NULL;
    int iValue1 = 0 ,iValue2 = 0 ,iCnt = 0;


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

    iRet = Product(ptr , iSize);

    printf("Product of odd elements is : %d",iRet);

    free(ptr);

    return 0;

  
}