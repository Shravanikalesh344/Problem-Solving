#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iValue)
{
    if((iValue % 2) == 0)
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
    bool bRet = false;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    bRet= CheckEven(iNo);
    
    if(bRet == true)
    {
        printf("%d is an even number\n",iNo);
    }
    else
    {
        printf("%d is an odd number\n",iNo);
    }

    return 0;
}