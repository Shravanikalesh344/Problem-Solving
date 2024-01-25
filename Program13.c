#include<stdio.h>

float CalculatePercentage(int Marks ,int iTotal)
{
    float fRet = 0.0f;

    if((Marks < 0) || (iTotal < 0)  || (Marks > iTotal))
    {
        printf("Invalid Input \n");
        return fRet;
    }

    

    fRet = (((float)Marks / (float)iTotal)*100);

    return fRet;

}

int main()
{
    // auto int iMarks = 0;
    int iMarks = 0;
    int iOutoff = 0;
    float fPercentage = 0.0f;

    printf("Enter the marks you got :\n");
    scanf("%d",&iMarks);
    printf("Outoff Marks \n");
    scanf("%d",&iOutoff);

    fPercentage=CalculatePercentage(iMarks,iOutoff);

    printf("Your Percentage is %f\n",fPercentage);

    return 0;
}