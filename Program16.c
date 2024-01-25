#include<stdio.h>

void DisplayExamTime(int iClass)
{
    if(iClass > 5)
    {
        printf("Invalid Input ! \n");
    }

    if(iClass == 1)
    {
         printf("Your Exam is at 8 AM\n ");
    }
    else if(iClass == 2)
    {
         printf("Your Exam is at 9 AM\n ");
    }
    else if(iClass == 3)
    {
         printf("Your Exam is at 10 AM\n ");
    }
    else if(iClass == 4)
    {
         printf("Your Exam is at 11 AM\n ");
    }
    else if(iClass == 5)
    {
         printf("Your Exam is at 12 NOON\n ");
    }

    /*
    else {
        printf("Invalid Input..\n");
    }
    */

}




int main()
{
    // auto int iValur = 0;
    int iValue = 0;
    printf("Enter Your Standered :\n");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);


    return 0;
}