#include<stdio.h>

int main()
{

    int arr[0];
    int n;
    int i=0;
    
  //  int *parr = arr;

    printf("How many elements do you want in an array\n");
    scanf("%d\n",&n);

    printf("Enter the elements in the array\n");
    for(i=1;i<=n;i++)
    {

        scanf("%d\n",arr + i);
    }
    printf("Elements are :\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",*(arr + i));
    }    

    return 0;
}
