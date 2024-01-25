#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a character :\n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("TRUE\n");
    }
    else 
    {
        printf("FALSE\n");
    }
    return 0;
}