#include<stdio.h>

void strlwr(char *str)
{
    while(*str != '\0')
    {
    *str = *str + 32;
     *str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter the String\n");
    scanf("%[^'\n]s",arr);

    strlwr(arr);

    printf("Modified String is %s",arr);

    return 0;
}