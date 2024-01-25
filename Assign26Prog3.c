#include<stdio.h>

int Difference(char *str)
{
    int icCnt = 0 , isCnt = 0;

    while(*str != '\0')
    {
        if(*str >='a' && *str <= 'z')
        {
            icCnt++;
        }
        else
        {
            isCnt++;
        }

        *str++;
    }
    int diff = icCnt - isCnt;
    return diff;

}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}