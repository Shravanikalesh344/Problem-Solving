#include<stdio.h>

// Logical OR || -> if any of the condition is true it enters inside the if
// Logical AND && -> if all of the conditions are true then it enters inside the if 

void DisplayClass(float fValue)
{
        if((fValue < 0.00) || (fValue > 100.00)) // Filter 
        {
            printf("Invalid Marks..\n");
        }


    if((fValue >=0.0) && (fValue < 35.00))
    {
        printf("You Are Fail..\n");
    }
    else if((fValue >=35.00) && (fValue < 50.00))
    {
        printf("You Class is Pass Class\n");
    }
    else if((fValue >=50.00) && (fValue < 60.00))
    {
        printf("Your Class is second Class \n");
    }
    else if((fValue >=60.00) && (fValue < 75.00))
    {
        printf("Your Class is first Class \n");
    }
    else if((fValue >= 75.00) && (fValue <= 100.00))
    {
        printf("Your Class is First With Distinction \n");
    }
    
}

int main()
{

    float fPercentage = 0.0f;
    printf("Enter your percentage to display the result: \n");
    scanf("%f",&fPercentage);

    DisplayClass(fPercentage);

    return 0;

}