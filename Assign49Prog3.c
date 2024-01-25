#include<stdio.h>

int StrLenX(char *str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
        str++;
        iCnt++;
        StrLenX(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter the String:\n");
    scanf("%[^'\n']s",Arr);

    iRet = StrLenX(Arr);
    printf("Length of String is : %d\n",iRet);
    
    return 0;

}