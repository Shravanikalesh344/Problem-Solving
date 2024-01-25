#include<stdio.h>

int Find_nth_term(int iNo1 , int iNum1 , int iNum2 , int iNum3)
{
    int iSum = 0;
    int iCnt = 0;
    for(iCnt = iNo1-1 ; iCnt <= iNo1 ; iCnt++)
    {
        iSum = iNum1 + iNum2 + iNum3;
        iNum1 = iNum2;
        iNum2 = iNum3;
        iNum3 = iSum;
    }
    return iSum;
}

int main()
{
    int ino = 0;
    int iRet = 0;
    int iValue1 = 0 , iValue2 = 0 ,iValue3 = 0;

    printf("Enter Total Number of elements:\n");
    scanf("%d",&ino);

    printf("Enter another three values:\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Find_nth_term(ino,iValue1,iValue2,iValue3);
    printf("Nth term is : %d\n",iRet);

}