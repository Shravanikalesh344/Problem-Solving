#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
        WhiteSpace(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[50];

    printf("Enter the String :\n");
    scanf(" %[^'\n']s",Arr);

    iRet = WhiteSpace(Arr);
    printf("Number of White Spaces Are : %d\n",iRet);

    return 0;
}