#include<stdio.h>

int main()
{
    int n = 0;
    int arr[n];
    int i = 0, j = 0 ;
    int target = 0;
    printf("How many elements do you want in your array\n");
    scanf("%d\n",&n);
    printf("Enter the elements in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j < n ; j ++)
        {

                if(arr[i]  + arr[j] == target)
                {
                    printf("%d\t%d", i,j);
                }
        }
    }


   
   


   
    return 0;
}