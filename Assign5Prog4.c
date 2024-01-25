#include<stdio.h>

int Multiply(int iNo1 , int iNo2 ,int iNo3)
{
    int iAns = 0;

    if(iNo1 == 0)
    {
        iAns = iNo2 * iNo3;
        return iAns;
    }
    else if((iNo2 == 0) && (iNo3 == 0))
    {
        iAns = iNo1;
        return iAns;
    }
    else if((iNo1 == 0)&& (iNo2 == 0))
    {
        iAns = iNo3;
        return iAns;
    }
    else if((iNo1 == 0)&&(iNo3 ==0))
    {
         iAns = iNo2;
         return iAns;
    }
    else if(iNo2 == 0)
    {
        iAns = iNo1 * iNo3;
        return iAns;
    }
    else if(iNo3 == 0)
    {
        iAns = iNo1 * iNo2;
        return iAns;
    }
    else
    {
        iAns = iNo1 * iNo2 * iNo3;
             return iAns;
     }
}
int main()
{
    int iValue1 = 0 , iValue2 = 0 , iValue3 = 0 , iRet = 0;

    printf("Please Enter Three Numbers\n");
    scanf("%d %d %d",&iValue1 , &iValue2 , &iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is : %d",iRet);

    return 0;
}


//Time Complexity : O(2n);