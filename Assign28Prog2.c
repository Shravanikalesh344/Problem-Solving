#include<stdio.h>

int CountChar(char *str , char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(ch == *str)
        {
            iCnt++;
        }
        *str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Character :\n");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("Character Frequency is %d",iRet);

    return 0;
}