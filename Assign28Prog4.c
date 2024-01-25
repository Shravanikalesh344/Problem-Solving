#include<stdio.h>


int  FirstChar(char *str,char ch)
{
    int iCnt = 0;
    int iFirst = -1;
  
    while(*str != '\0')
    {
        for(iCnt = 0 ;iCnt <= 20  ; iCnt++)
        {
        if(ch == *str)
        {
           iFirst= iCnt;
           return iFirst;
        }
        else 
        {
         *str++;
        }  
        }
}
 //return iFirst;
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

    iRet = FirstChar(arr,cValue);

    printf("%d",iRet);

     return 0;
}
