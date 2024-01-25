#include<stdio.h>

int ReverseNo(int iNo)
{
    int iDigit = 0;
    static int iRev = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
        
        ReverseNo(iNo);
    } 
    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = ReverseNo(iValue);
    printf("Reverse Number is : %d",iRet);

}