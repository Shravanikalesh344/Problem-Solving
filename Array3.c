#include<stdio.h>

int main()
{

    int Arr[4] = {11,21,51,101};

    printf("Base address of array : %d\n",Arr);

    printf("First Element is :%d\n",Arr[0]);

    printf("Base address of first elemnt of array : %d\n",&(Arr[0]));

    printf("Address of second element is :%d\n",&(Arr[1]));

    printf("Address of third element is :%d\n",&(Arr[2]));


    printf("Size of Whole Array : %d\n",sizeof(Arr));

    printf("Size of Second element of array :%d\n",sizeof(Arr[1]));


    return 0;
}