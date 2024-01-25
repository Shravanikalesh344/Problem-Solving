#include<stdio.h>

void Display(int iNo)
{
    
    if(iNo != 0)
    {
        printf("%d\t",iNo);  
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the value :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}