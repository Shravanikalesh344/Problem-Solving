#include<stdio.h>

void Display(int iRow , int iCol)
{
   int i = 0;
   int j = 0;

   for(i = 1 ;i <= iRow ; i++)
   {
        for(j = 1 ; j<= iCol; j++)
        {
            if((i == 1)||( j == 1)||(i == iRow)||( j == iCol))
            {
                printf("*\t");
                
            }
            else if(i == j)
            {
                printf("*\t");
            }
            else 
            {
                printf("\t");
            }
        }
        printf("\n\n");
   }

}

int main()
{
    int iNo1 = 0 , iNo2 = 0 ;

    printf("Enter Number of Rows :\n");
    scanf("%d",&iNo1);

    printf("Enter Number of columns :\n");
    scanf("%d",&iNo2);


    Display(iNo1 , iNo2);
    return 0;
}