#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 50)
    {
        printf("Number Is Small \n");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("Number Is Medium \n");
    }
    else if(iNo > 100)
    {
        printf("Number is Large \n");
    }
    else
    {
        printf("Invalid");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}

//Time Complexity : O(n)