#include<stdio.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

bool ChkVowel(char cNo)
{
    if((cNo == 'a')|| (cNo == 'e')||(cNo =='i')||(cNo == 'o')||(cNo == 'u'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("%c is a Vowel\n",cValue);
    }
    else
    {
        printf("It is not a vowel\n");
    }

    return 0;
}