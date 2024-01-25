#include<stdio.h>


int main()
{
    int no1 = 0;
    int no2 = 0;
   
    printf("Enter the two numbers:\n");
    scanf("%d %d \n",&no1,&no2);
   

    
    printf("Numbers before swapping : %d\t%d\n",no1,no2);


    no2 = no1 + no2;
    no1 = no2 - no1;
    no2 = no2 - no1;
    
   
 
 
    printf("Numbers After Swapping are %d\t%d\n",no1,no2);
   


    return 0;
}