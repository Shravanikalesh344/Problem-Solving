#include<stdio.h>

int CountCapital(char *Arr)
{
    static int iCount = 0;
    if(*Arr != '\0')
    {
        if(*Arr >= 'A' && *Arr <= 'Z')
        {
             iCount++;
        }
        Arr++;
        CountCapital(Arr);
    }
    
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("Capital i s : %d\n",iRet);
  
    return 0;
}