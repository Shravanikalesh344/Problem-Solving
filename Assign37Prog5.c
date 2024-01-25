#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
    int iMask =  0X80000001;
    int iResult = 0;
    iResult = iMask & iNo;

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
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bool bRet = false;

    if(bRet == true)
    {
        printf("1st and last Bits are ON");
    }
    else 
    {
        printf("Bit is OFF");
    }

    return 0;
}

