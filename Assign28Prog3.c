#include<stdio.h>


int  LastChar(char *str,char ch)
{
    int iCnt = 0;
    int iLast = -1;
    while(*str != '\0')
    {
        for(iCnt = 0 ;iCnt <= 20 ; iCnt++)
        {
        if(ch == *str)
        {
           iLast = iCnt;
        }
        *str++;
    }  

}
 return iLast;
}
int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);

    printf("%d",iRet);

     return 0;
}
