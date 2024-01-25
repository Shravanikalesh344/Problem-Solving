#include<stdio.h>

void  DisplayDigits(int iValue)
{
   // static int iCnt = 1;
    //static  int iSum = 0;
    int idigit = 0;

    while(iValue != 0)
    {
        idigit = iValue % 10;
        printf("%d\t",idigit);
        iValue = iValue / 10;
    }
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a number :\n");
    scanf("%d",&iNo);

    DisplayDigits(iNo);
  
    return 0;
}