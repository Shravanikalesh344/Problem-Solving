#include<stdio.h>

int main()
{
    int Standered = 0;

    printf("Primary School Portal\n");

    printf("Enter your division\n");
    scanf("%d",&Standered);

    switch(Standered)
    {
        case 1:
            printf("Your exam is a t 1\n");
            break;
        case 2 :
            printf("Your exam is a t 2\n");
            break;
        case 3 :
            printf("Your exam is a t 3\n");
            break;
        case 4 :
            printf("Your exam is a t 4\n");
            break;
        default:
            printf("Invalid Standered\n");
            break;
    }
        return 0;
}    