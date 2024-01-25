#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
  
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
         if((Arr[iCnt] >= 100 )&& ( Arr[iCnt] <= 999 ))
         {
            printf("%d\n",Arr[iCnt]);
        }
       
    }
}
     
  
       



int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0 , iRet = 0;
   

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

     Digits(ptr ,iSize);

    
 
    free(ptr);

   return 0;
}