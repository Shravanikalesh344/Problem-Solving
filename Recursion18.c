#include<stdio.h>

int  StrlenX(char *Arr)
{
    static int iCount = 0;
    if(*Arr != '\0')
    {
        iCount++;
         Arr++;
         StrlenX(Arr);
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