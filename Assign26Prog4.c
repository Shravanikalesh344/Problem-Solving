#include<stdio.h>
#include<stdbool.h>


bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
    if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
    {
        return true;
        *str++;
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
    bool bRet = false;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("Contains Vowels\n");
    }
    else
    {
        printf("Doesnot Contain Vowel\n");
    }

    
    return 0;
}