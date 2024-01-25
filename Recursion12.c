#include<stdio.h>

int  Factorial(int iValue)
{
   static int iCnt = 1;
   static int Mul = 1;

   if(iCnt <= iValue)
   {
        Mul = Mul * iCnt;
        iCnt++;
        Factorial(iValue);
   }
   return Mul;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a number :\n");
    scanf("%d",&iNo);

    iRet= Factorial(iNo);
    printf("Factorial is : %d\n",iRet);
  
    return 0;
}