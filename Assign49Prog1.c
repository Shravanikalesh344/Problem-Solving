#include<stdio.h>

void Display(int iValue)
{
    if(iValue > 0)
    {
        printf("%d\t*\t",iValue);
        iValue--;
        Display(iValue);
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the value :\n");
    scanf("%d",&iNo);

    Display(iNo);
    return 0;
}