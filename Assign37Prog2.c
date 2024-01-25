#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iValue)
{
    int iMask = 0X00020010;
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
        printf("5Th  And 18Th Bits Are  in ON");
    }
    else 
    {
        printf("Bits is OFF");
    }
    return 0;
}