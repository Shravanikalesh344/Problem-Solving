#include<stdio.h>

int  main()
{

    int arr[5] = {10,20,30,40,50};

    printf("%d\n",arr);
    printf("%d\n",arr + 1);
    printf("%d\n",arr + 2);
    printf("%d\n",arr + 3);
    printf("%d\n",arr + 4);
   // printf("%d\n",arr + 5);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",&arr);
    printf("%d\n",&arr + 1);
   // printf("%d\n",&arr + 2);

    return 0;
}