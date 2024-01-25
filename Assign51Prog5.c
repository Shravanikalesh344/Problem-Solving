#include<stdio.h>

void Display()
{
    static char  ch1 = 'a';
    static char ch = 'f';
    if(ch1 <= ch)
    {
        printf("%c\t",ch1);
        ch1++;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}