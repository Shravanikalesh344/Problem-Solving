#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;
    char ch = '\0';
    int iCnt = 1;
    
   
    
    

    for(i = 1 ; i <= iRow; i++)
    {
        for(j = 1, ch = 'a'; j <= iCol ; j++,ch++, iCnt++)
        {
        
          if((i % 2) != 0)
          {
           
           printf("%c\t", ch);
            
         }
        else
          {
           
            printf("%d\t",iCnt);
           
            
          }
          
            
        
        }
        iCnt = 1;
       
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