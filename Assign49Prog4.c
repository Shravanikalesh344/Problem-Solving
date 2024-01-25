#include<stdio.h>

int Fact(int iNo)
{
    static int iFact = 1;
    static int icnt = 1;
    if(icnt <= iNo)
    {
        iFact = iFact * icnt;
        icnt++;
        Fact(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number :\n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);
    printf("Factorial is : %d\n",iRet);

    return 0;
}