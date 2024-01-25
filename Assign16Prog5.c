#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigitsSum = 0;
    int iDigit = 0;
    

    
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        
         while(Arr[iCnt] != 0)
         {
         iDigit = Arr[iCnt] % 10 ;
         iDigitsSum = iDigitsSum + iDigit;
         Arr[iCnt] = Arr[iCnt] / 10;
         
         
         }
         
         printf("%d\t",iDigitsSum);
         iDigitsSum = 0;
     
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

     DigitsSum(ptr ,iSize);

    
 
    free(ptr);

   return 0;
}