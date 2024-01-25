#include<stdio.h>

void strupr(char *str)
{
    while(*str != '\0')
    {
    *str = *str - 32;
     *str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter the String\n");
    scanf("%[^'\n]s",arr);

    strupr(arr);

    printf("Modified String is %s",arr);

    return 0;
}