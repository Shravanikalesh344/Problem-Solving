#include<stdio.h>

int CountSmall(char *str)
{
   static int iCnt = 0;
    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
        CountSmall(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[50];

    printf("Enter A String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);
    printf("Number of Small Characters Are : %d",iRet);
    return 0;
}