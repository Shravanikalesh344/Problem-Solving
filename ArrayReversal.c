#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int arr1[],int iLength)
{
    int iCnt = 0;

    for(iCnt = iLength-1 ; iCnt >= 0 ; iCnt--)
    {
        printf("%d\t",arr1[iCnt]);
    }
}

int main()
{
    int iSize = 0;
    int *Arr = NULL;

    printf("Hoe many elements do you want\n");
    scanf("%d",&iSize);

    Arr = (int*)malloc(iSize * sizeof(int));

    int iCnt = 0;
    printf("Enter the elements in the array\n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
            scanf("%d",&Arr[iCnt]);   
    }

    DisplayReverse(Arr,iSize);
    
    return 0;
}
