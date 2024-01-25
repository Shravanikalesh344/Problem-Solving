#include<stdio.h>
#include<stdlib.h>


int main()
{
    int Arr[5];     //Static Memory 
    float fValue;  //Static Memory 
    double Brr[4];  //Static Memory 

    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the size of Array :\n");
    scanf("%d",&iSize);


    ptr = (int *)malloc(iSize * sizeof(int))ss

    return 0;
}