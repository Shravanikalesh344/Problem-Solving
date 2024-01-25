#include<stdio.h>
int SumFactors(int iNo)
{
        int iCnt = 0;
        int iSum = 0;
       
        for(iCnt = 1 ; iCnt <= (iNo/2) ;iCnt++)
        {
            if((iNo % iCnt) == 0)
            {

                iSum = iSum + iCnt;
            }
        }
        return iSum;
}

int main()

{
    int iValue = 0;
    int iAdd = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iAdd = SumFactors(iValue);

    printf("Sum of Factor is %d\n",iAdd);

    return 0;
}


// Time Complexity : O(N/2)