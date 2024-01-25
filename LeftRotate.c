#include<stdio.h>
#include<stdlib.h>

void Reverse(int arr[],int iStart , int iEnd)
{
    while(iStart < iEnd)
    {
        int temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = temp;
        iStart ++;
        iEnd --;
    }
}

void LeftRotate(int arr[],int iLength,int Pos)
{
    Reverse(arr,0,Pos-1);

    Reverse(arr,Pos,iLength-1);

    Reverse(arr,0,iLength-1);

}
int main()
{
    
    int iCnt = 0;
    int d = 0;
    int iSize = 0;
    int *ptr = NULL;

    printf("How Many elements do you want ?\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    int arr[iSize];

    printf("Enter the elements in the array :\n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&arr[iCnt]);
    }

    printf("Origional Array :\n");
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("%d\t",arr[iCnt]);
    }

    printf("\nenter the rotations you want to make:\n");
    scanf("%d",&d);


    LeftRotate(arr,iSize,d);
    printf("Array Rotated by %d positions to the left :\n",d);
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\t",arr[iCnt]);
    }


    
    return 0;
}