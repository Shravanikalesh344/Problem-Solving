#include<stdio.h>

float Percentage(int iNo1 , int iNo2)
{
    float fAns = 0.0;

    if((iNo1 <= 0) || (iNo2 <= 0 ))       //filter
    {
        printf("Can't Calculate the percetnage\n");
        return fAns;
   }
   if(iNo2 > iNo1)
   {
        printf("Can't Calculate the percetnage\n");
        return fAns;
   }
    else
    {
     fAns = (((float)iNo2 / iNo1)* 100);

        return fAns;
    }

}

int main()
{
    int iValue1 = 0 , iValue2 = 0 ;
    float fRet = 0.0;

    printf("Enter your total marks :\n");
    scanf("%d",&iValue1);

    printf("Enter your obtained marks :\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1 , iValue2);

    printf("Percentage : %f \n",fRet);

    return 0;


}


// Time Complexity :  O(n)