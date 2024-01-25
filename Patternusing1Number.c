#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0 , j = 0;
    int iRow = 0;
    int iCol = 0;
    int iCopy = iNo;
    int iAns = (iNo + iNo)-1;
    iRow = iAns;
    iCol = iAns;
    for(i = 1 ; i <= iRow  ; i++)
    {
        for(j = 1 ; j <= iCol  ; j++)
        {
            
            if((i == 1 )||(j == 1)||(i == iRow)||(j == iCol))
            {
                printf("%d\t",iNo);
            }
            else if((i == iRow-1)||(j == iCol-1))
            {
                printf("%d\t",iNo-1);
            }
        /**/    else
            {
                printf("%d\t",iNo-2);
            }
           
        }
      printf("\n");
      
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the input number :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}