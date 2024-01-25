#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        iCnt++;
        Display(iNo);
        printf("*\t");   
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