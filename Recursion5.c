
#include<stdio.h>

void displayR()
{
    static int iCnt = 1;
    while(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
        displayR();
    }    
}
int main()
{
  

    displayR();
    return 0;
}



