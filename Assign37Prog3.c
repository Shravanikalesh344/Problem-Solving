#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
    int iMask = 0X08104040;
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
        printf("7th , 15th , 21St , 28th Bit is ON");
    }
    else 
    {
        printf("Bit is OFF");
    }

    return 0;
}

