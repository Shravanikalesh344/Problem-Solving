#include<stdio.h>

int  RangeSumEven(int iStart , int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart > iEnd) || ((iStart < 0) || (iEnd < 0)))
    {
        printf("Invalid Range ! \n");
        return iSum;
    }

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
       iSum = iSum + iCnt;
    }
   return iSum ; 
    
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter Ending Pointer :\n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1 , iValue2);

    printf("Addition is : %d",iRet);

    return 0;
}

//Time Compleixty : O(n);