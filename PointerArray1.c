#include<stdio.h>

int main()
{

    int arr[25], i, n ;
    printf("Enter elements in array\n");
    scanf("%d\n",n);


 
  
    for(i = 0 ; i < n ; i++)
    {
        printf("Arry is %d\n",*(arr+i));
    }

    return 0;
}