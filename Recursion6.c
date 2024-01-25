
#include<stdio.h>

void displayI()
{
    int iCnt = 1;
    while(iCnt <= 5)
    {
        printf("%d\t",iCnt);
        iCnt++;
      
    }    
}

void displayR()
{
    static int iCnt = 1;

    if(iCnt <= 5)
    {
        printf("%d\t",iCnt);
        iCnt++;
        displayR();
    }
}
int main()
{
  
    displayI();
    displayR();
    return 0;
}



