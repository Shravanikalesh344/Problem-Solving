#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str , char ch)
{
    while(*str != '\0')
    {
        if(ch == *str)
        {
            return true;
        }
        else
        {
            *str++;
        }
        
    }
}

int main()
{
    char arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == true)
    {
        printf("Character Found\n");
    }
    else
    {
        printf("Character Not Found\n");
    }


    return 0;
}
