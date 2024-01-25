#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;
    char ch = '\0';
    char cch = '\0';


    for(i = 1 ; i <= iRow ; i++)
    {
        for(j= 1 , ch = 'A' , cch = 'a'; j <= iCol ; j++, ch++, cch++)
        {
            if((i % 2)== 0)
            {
            printf("%c\t",cch);
            }
            else 
            {
                printf("%c\t",ch);
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