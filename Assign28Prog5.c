#include<stdio.h>

void StrRevX(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        iCnt++;
    }

    int iStart = 0;
    int iLength = iCnt -1;

    while(iStart < iLength)
    {
        char temp = str[iStart];
        str[iStart] = str[iLength];
        str[iLength] = temp;

        iStart++;
        iLength--;
    }
}
int main()
{
    char arr[20];
    printf("Enter String :\n");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified String is %s",arr);

    return 0;
}