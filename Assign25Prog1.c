#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    int ch = '\0';
      printf("---------------------------------------------------------");
       printf("------------ASCII TABLE----------------------------------");
       printf("----------------------------------------------------------");

    for(iCnt = 1 ; iCnt <= 127 ; iCnt++)
    {
     
       printf("%d\t%c\t%o\t%x\n",iCnt,iCnt,iCnt,iCnt);
    }

    printf("------------------------------------------------------------");
    
}

int main()
{
    DisplayASCII();

    return 0;
}