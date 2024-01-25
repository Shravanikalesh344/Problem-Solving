
#include<stdio.h>

void displayI(int iValue)
{
    int iCnt = 1;
    while(iCnt <= iValue)
    {
        printf("%d\t",iCnt);
        iCnt++;
      
    }    
}

void displayR(int iValue)
{
    static int iCnt = 1;

    if(iCnt <= iValue)
    {
        printf("%d\t",iCnt);
        iCnt++;
        displayR(iValue);
    }
}
int main()
{
    int iNo = 0;
    printf("Enter a number to print till number :\n");
    scanf("%d",&iNo);
  
    displayI(iNo);
    displayR(iNo);
    return 0;
}



