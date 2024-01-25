
#include<stdio.h>

void displayI()
{
    int iCnt = 1;
    while(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
    } 
    printf("\n");   
}



int main()
{
    displayI();

    displayR();
    return 0;
}



