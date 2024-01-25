#include<stdio.h>

void Factor(int iValue)
{
    static int iCnt = 1;

    while(iCnt <= (iValue/2))
    {
        if((iValue % iCnt)==0)
        {
            printf("%d\t",iCnt);
            
        }
        iCnt++;
        Factor(iValue);
    }
}


int main()
{
    int iNo = 0;

    printf("Enter a number :\n");
    scanf("%d",&iNo);

    Factor(iNo);

}