#include<stdio.h>

int main()
{

    int n, i;
    int arr[i];

    printf("How many elements do you want\n");
    scanf("%d\n",n);
    printf("Enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d\n",arr[i]);
    }
    for(i=0;i<5;i++)
    {
        int temp;
        if(n % 2 != 0)
        {
            temp = temp + arr[i];
        }
        printf("Addtion is\n",temp);
    }

    return 0;
}