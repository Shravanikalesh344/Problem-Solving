#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("*\t");
    }
}

int main()
{

    int iValue = 0;

    printf("How many times you want to display * on screen\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}