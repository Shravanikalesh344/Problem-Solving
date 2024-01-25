#include<stdio.h>
void DisplayFactors(int iNo)
{
        int iCnt = 0;
        printf("Factors of %d are :\n",iNo);
        for(iCnt = 1 ; iCnt < iNo ;iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                printf("%d\n",iCnt);
            }
        }
}

int main()

{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}

//Time Complexity : O(N)


/*
O(N)
O(2N)
O(N^2)
O(N^3)
O(N/2)
O(N/4)
*/