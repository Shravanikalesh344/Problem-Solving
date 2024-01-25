#include<stdio.h>

int main()
{
    int Standered = 0;

    printf("Primary School Portal\n");

    printf("Enter your division\n");
    scanf("%d",&Standered);

    if(Standered == 1)
    {
        printf("Your Exam is at 1 PM\n");
    }
    else if(Standered == 2)
    {
        printf("Your exam is at 2 PM\n");
        
    }
    else if(Standered == 3)
    {
        printf("Your exam is at 3PM\n");
    
    }
    else if(Standered == 4)
    {
        printf("Your exam is at 4PM\n");
    }
    else
    {
        printf("Invalid Syntax");
    }


    return 0;
}