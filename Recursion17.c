#include<stdio.h>

int  StrlenX(char *Arr)
{
    int iCnt = 0;
    int iCount = 0;
    while(Arr[iCnt] != '\0')
    {
         iCount++;
         iCnt++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = StrlenX(Arr);
    printf("length is : %d\n",iRet);
  
    return 0;
}