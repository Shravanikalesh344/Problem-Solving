//Display Average

#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    //float fAvg = 0.0; 

    for(iCnt = 0;iCnt <iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
      
        
    }
      //fAvg = iSum / iSize;
    //return fAvg;
    return ((float)iSum / (float)iSize);
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    float fRet = 0.0; 

    printf("How many elements do you want ? :\n");
    scanf("%d",&iCount);

    ptr =(int *)malloc(iCount * sizeof(int));

    printf("Dyanmic Memory allocated for %d Elements !\n",iCount);

    printf("Enter %d Elements \n",iCount);
    for(iCnt = 0;iCnt < iCount ; iCnt++)
    {
        printf("Enter the element no %d :\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    fRet = Average(ptr , iCount);
     printf("Average of Elements is %f\n",fRet);

    free(ptr);
    printf("Dyanamic Memeory deallocated Successfully !\n");
    


    return 0;
}