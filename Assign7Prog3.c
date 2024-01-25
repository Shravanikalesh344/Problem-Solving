#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 1;
    int fact = 1;

    if(iNo < 1)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <=iNo ; iCnt++) //5
    {
        fact = fact * iCnt;
         
    } 
  
    return fact;  
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number to find Factorial :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d",iRet);

    return 0;
}

//Time Complexity : O(n);