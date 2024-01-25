#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;
   for(iCnt = 0;iCnt < iLength ; iCnt++)
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
    int iSize = 0 , iCnt = 0 , iRet = 0;
    int iValue = 0;
    int *p = NULL;

    printf("Enter Number of Elements :\n");
    scanf("%d",&iSize);

    printf("Enter Element to find it's frequency :\n");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory !\n");
        return -1;
    }

    printf("Enter %d Elements :\n",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter Elements : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
   iRet= Frequency(p,iSize,iValue);

   printf("Frequency  is %d\n",iRet);


    free(p);

    return 0;
}