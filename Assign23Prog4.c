#include<stdio.h>
void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;

    for(i = 1 ; i<=iRow ; i++)
    {
        for(j = 1 ; j<=iCol ; j++)
        {
           if((i == 1 && j == 6)||( i == 2 && j ==5)||( i == 3 && j ==4)||(i == 4 && j == 3)||(i == 5 && j ==2)||(i == 6 && j ==1))
            {
                printf("*\t");
            }
            else if((i == 1)||(j ==1)||(i == iRow)||(j == iCol))
            {
                printf("*\t");
            }
            else if((i ==2 && j ==2)||(i ==2 && j ==3)||( i == 2 && j == 4)||(i == 3 && j ==2)||(i == 3 && j ==3)||( i == 4 && j ==2))
         {
                printf("#\t");
            }
            else 
            {
                printf("$\t");
            }
            
                    }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    printf("Enter Number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter Number of columns :\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}