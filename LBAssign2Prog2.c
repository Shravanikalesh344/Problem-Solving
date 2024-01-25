#include<stdio.h>

void Display(int iNo)
{
   // int iCnt = 0;
    while(iNo > 0 )
    {
        printf("*\n");
        iNo --;
        //iCnt++; we can do this too
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}