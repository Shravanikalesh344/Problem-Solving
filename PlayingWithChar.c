#include<stdio.h>

int main()
{
    char ch = '\0';
    char ch1[10];
    char ch2[100];

    printf("Enter a character:\n");
    scanf("%c",&ch);

    printf("Enter a Word\n");
    scanf("%s",&ch1);

    printf("Enter a Sentence\n");
    scanf("%s",&ch2);

    printf("Character is : %c\n",ch);
    printf("Word is  : %s\n",ch1);
    printf("Sentence is  : %s\n",ch2);

}