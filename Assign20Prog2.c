#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;
   
    int iCnt = 1;
    int iEvenCnt = 0;
    int iOddCnt = 1;
    

    for(i = 1 ; i <= iRow; i++)
    {
        for(j = 1   ; j <= iCol ; j++)
        {
        
          if((i % 2) != 0)
          {
           iEvenCnt = iEvenCnt + 2;
           printf("%d\t", iEvenCnt);
            
         }
        else
          {
           
            printf("%d\t", iOddCnt);
             iOddCnt = iOddCnt + 2;
            
          }
            
        
        }
        iEvenCnt = 0;
        iOddCnt = 1;
        printf("\n");       
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Number of Rows And Colums :\n");
    scanf("%d %d",&iValue1 , &iValue2);

    Pattern(iValue1 , iValue2);
    return 0 ;
}