#include<stdio.h>

swap(int n1,int n2)
{

    n2 = n1 + n2;
    n1 = n2 - n1;
    n1 = n2 - n1; 

}

int main()
{
    int no1 = 0;
    int no2 = 0;
    printf("Enter the number 1\n");
    
    scanf("%d\n",&no1);

    printf("Enter number 2\n");

    scanf("%d\n",&no2);

    printf("Numbers before swapping : %d\t%d\n",no1,no2);
     
     int result = 0;

   swap(no1,no2);

   printf("Numbers after swapping:%d\t%d\n",n1,n2);


    return 0;
}