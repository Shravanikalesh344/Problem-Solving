#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 1;
    static char ch = 'a';
    if(iCnt <= iNo)
    {
        printf("%c\t",ch);
        ch++;
        iCnt++;
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