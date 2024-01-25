#include<stdio.h>
#include<stdlib.h>



int LastOcc(int Arr[], int iLength , int iNo)
{
    int iCnt = 0;
    int iRetIndex = -1;
   

    
    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
          
            iRetIndex = iCnt ;
        }
       
    }
    return iRetIndex;
}


int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iValue = 0 , iCnt = 0 , iRet = 0;
   

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

    iRet = LastOcc(ptr , iSize,iValue);

    printf("%d\n",iRet);
 
    return 0;

    free(ptr);
}