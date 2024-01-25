#include<stdio.h>

void DisplayExamTime(int iClass)
{
    switch(iClass)
    {
        case 1 :
            printf("Your Exam is at 8 AM \n");
            break;

        case 2 :
            printf("Your Exam is at 9 AM\n ");
            break;

        case 3 :
            printf("Your Exam is at 10 AM \n");
            break;

        case 4 :
            printf("Your Exam is at 11 AM \n");
            break;

        case 5 :
            printf("Your Exam is at 12  NOON \n");
            break;
        
        default :
            printf("Invalid Input..\n");
    }
}

int main()
{
    // auto int iValue = 0;
    int iValue = 0;
    printf("Enter Your Standered :\n");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);


    return 0;
}