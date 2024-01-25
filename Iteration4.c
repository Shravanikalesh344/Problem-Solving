#include<stdio.h>

int main()
{
    int i = 1;
    int count = 0;
    
    printf("Enter number of times you want to display jay ganesh on screen");
    scanf("%d",&count);


    while(i <= count)
    {
        printf("Jay Ganesh...\n");
        i++;
    }

    return 0;
}