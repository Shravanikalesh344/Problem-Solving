#include<stdio.h>

void strtoggle(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str<='Z')
        {
            *str = *str + 32;
        }
        else if(*str >= 'a' && *str <='z')
        {
            *str = *str - 32;
        }
        *str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter the String\n");
    scanf("%[^'\n]s",arr);

    strtoggle(arr);

    printf("Modified String is %s",arr);

    return 0;
}