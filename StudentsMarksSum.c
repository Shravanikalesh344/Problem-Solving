#include<stdio.h>
#include<stdlib.h>

int SumOfMarks(int iSize , int Marks[] , char Gender)
{
    int iCnt = 0;
    int BSum = 0;
    int GSum  = 0;
    for(iCnt  = 0 ; iCnt < iSize ; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            BSum = BSum + Marks[iCnt];
        }
        else
        {
            GSum = GSum + Marks[iCnt];
        }
        
    }
    if(Gender == 'g')
    {
        return GSum;
    }
    else if(Gender == 'b')
    {
        return BSum;
    }
}


int main()
{
    int NoOfStd = 0;
    char gender;
    int iRet  = 0;

    printf("Enter the number of students :\n");
    scanf("%d",&NoOfStd);

    int *ptr = NULL;

    ptr = (int *)malloc(NoOfStd * sizeof(int));
    int iCnt = 0;
    int Arr[NoOfStd];
    printf("Enter the Marks :\n");
    for(iCnt = 0 ; iCnt < NoOfStd ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    
    printf("Enter the Gender : \n");
    scanf(" %c",&gender);

    iRet = SumOfMarks(NoOfStd,Arr,gender);
    printf("Summation of Marks is : %d\n",iRet);

    free(ptr);
    return 0;
}
