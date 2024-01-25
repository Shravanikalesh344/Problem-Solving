#include<stdio.h>

typedef int BOOL;


#define TRUE 1
#define FALSE 0


BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 0)
            {
             return TRUE;
            
              
             
            }
            iNo =  iNo / 10;
            
        }
        
}     

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("Number Contains Zero\n");
    }
    else
    {
        printf("Number doesnot contains Zero \n");
    }
    return 0;
}