#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iValue)
{
    int iMask = 0X00004000;
    int iResult = 0;
    
    iResult = iMask & iValue;

    if(iResult == iMask)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int iNo = 0;
    printf("Enter the number :");
    scanf("%d",&iNo);

    bool bRet = false;
    bRet = CheckBit(iNo);

    if(bRet == true)
    {
        printf("15 th Bit in ON");
    }
    else 
    {
        printf("15th Bit is OFF");
    }
    return 0;
}