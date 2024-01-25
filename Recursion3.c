
#include<stdio.h>

void displayI()
{
    int iCnt = 1;
    while(iCnt <= 4)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
    }    
}
void displayR()
{
    static int iCnt = 1;
    if(iCnt <= 4)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
        displayR();
    }    
}


int main()
{
    displayR();
    return 0;
}



