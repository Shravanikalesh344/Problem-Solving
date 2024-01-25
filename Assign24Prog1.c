#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

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