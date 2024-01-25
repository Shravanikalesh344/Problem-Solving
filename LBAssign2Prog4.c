#include<stdio.h>

void Display(int iNo , int iFrequency)
{
    int i = 0;
    for(i = 0; i<iFrequency ; i++ )
    {
        printf("Frequency is %d\n",iNo);
    }
   
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    printf("Enter Freuqency\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}