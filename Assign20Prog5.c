#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;
    
    int iCnt = 1;
  
    for(i = 1 ; i <= iRow; i++)
    {
        for(j = 1; j <= iCol ; j++ ,iCnt++)
        {
            if((i == 2)&& (j == 1))
            {
                iCnt = 2;
                printf("%d\t",iCnt);
                    
            }
               
            else if((i == 3)&& (j == 1))
            {
                iCnt = 3;
                printf("%d\t",iCnt);
                 
            }
              
            else if((i == 4)&&( j == 1))
            {
                iCnt = 4;
                printf("%d\t",iCnt);
                  
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