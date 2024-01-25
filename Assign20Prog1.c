#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;
   
    int iCnt = 1;
    

    for(i = 1 ; i <= iRow; i++)
    {
        for(j = 1   ; j <= iCol ; j++ , iCnt++)
        {
        
          if(i == 3 && j == 2)
          {
            iCnt = 1;
           printf("%d\t",iCnt);
          // iCnt++;
           
          }
          else
          {
            printf("%d\t",iCnt);
          }
            
        
        }
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