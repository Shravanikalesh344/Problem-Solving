#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <='Z')
    {
        int iCnt = 0;
        for(iCnt = ch; iCnt <= 'Z'; iCnt++,ch++)
        {
        printf("%c\t",ch);
       
    }
    }
    else if(ch >= 'a' && ch <='z')
    {
        int iCnt = 0;
        for(iCnt = ch ;iCnt >= 'a';iCnt--,ch--)
        {
          printf("%c\t",ch);
        }
    }
    else 
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}