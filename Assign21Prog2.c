#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;
    
   
  
    for(i = 1 ; i <= iRow; i++)
    {
        for(j = 1; j <= iCol ; j++)
        {
             if((i == 1 && j == 4)|| (i == 4 && j == 1))
            {
                printf("*\t");
            } 
          else  if((i == 4)|| (j == 4)|| (i == iRow)|| (j == iCol)||(i==3 && j== 3))
            {
                printf("#\t");
                    
            }
            
            else 
            {
                printf("*\t");
              
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